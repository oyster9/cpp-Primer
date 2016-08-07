#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	//读取指定目录的文件
	ifstream ifs("E:\\Programing\\cpp\\cpp-Primer\\Chapter10\\10.2.3.txt");
	if( !ifs )
	{
		cout << "read file fail!" << endl;
		return false;
	}
	////显示
	//string s;
	//while( getline(ifs, s) ) {
	//	cout << s;
	//}
	//cout << endl;

	//存入vector中
	vector<string> words;
	string s2;
	while( ifs >> s2 )
	{	//cout << s2 << " ";
		words.push_back(s2);
	}
	//排序(按字典序排序)
	sort( words.begin(), words.end() );
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//使用unique重排输入顺序，使每个单词只出现一次
	//返回一个指向不重复值范围末尾的迭代器
	auto end_unique = unique( words.begin(), words.end() );
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//使用向量操作erase删除重复单词
	words.erase(end_unique, words.end());
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
