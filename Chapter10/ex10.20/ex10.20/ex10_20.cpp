#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<fstream>

using namespace std;

//如果ctr的值大于1，返回word的复数形式
string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? (word + ending) : word;
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
	ifstream ifile("E:\\Programing\\cpp\\cpp-Primer\\Chapter10\\10.2.3.txt");
	if( !ifile )
	{
		cout << "Read file fail!" << endl;
		return false;
	}
	//读入容器
	vector<string> svec;
	string s;
	while( ifile.good() )//一直读到文件尾
	{
		ifile >> s;
		svec.push_back( s );
	}
	//显示原文
	for( auto it = svec.begin(); it != svec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//将单词按字典序排列，并删除重复单词
	elimDups(svec);
	//按长度排列，长度相同的单词维持字典序
	stable_sort(svec.begin(), svec.end(), [](const string &a, const string &b) { return a.size() < b.size();} );
	//显示排序后的
	for( auto it = svec.begin(); it != svec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//计算单词长度超过5的单词个数
	int Cnt = count_if(svec.begin(), svec.end(), [](const string &s){ return s.size() > 5; });
	cout << Cnt << endl;

	

	return 0;

}