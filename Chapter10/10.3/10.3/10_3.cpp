#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

//比较长度
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

//按字典序排序，并消除重复单词
void elimDups(vector<string> &words)
{
	//排序(按字典序排序)
	sort( words.begin(), words.end() );
	//for(auto it = words.begin(); it != words.end(); ++it)
	//	cout << *it << " ";
	//cout << endl;
	//使用unique重排输入顺序，使每个单词只出现一次
	//返回一个指向不重复值范围末尾的迭代器
	auto end_unique = unique( words.begin(), words.end() );
	//for(auto it = words.begin(); it != words.end(); ++it)
	//	cout << *it << " ";
	//cout << endl;
	//使用向量操作erase删除重复单词
	words.erase(end_unique, words.end());
	//for(auto it = words.begin(); it != words.end(); ++it)
	//	cout << *it << " ";
	//cout << endl;
}
int main()
{
	//读取指定目录的文件
	ifstream ifs("E:\\Programing\\cpp\\cpp-Primer\\Chapter10\\10.2.3.txt");
	if( !ifs )
	{
		cout << "read file fail!" << endl;
		return false;
	}
	//存入vector中
	vector<string> words;
	string s2;
	while( ifs >> s2 )
	{	//cout << s2 << " ";
		words.push_back(s2);
	}

	//将words按字典序重排，并消除重复单词
	elimDups(words);
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//按长度重新排序，长度相同的单词维持字典序
	stable_sort(words.begin(), words.end(), isShorter);//调用stable_sort，保持等长元素间的字典序
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
