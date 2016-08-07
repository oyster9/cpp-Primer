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

//求大于等于一个给定长度的单词数量，并将满足条件的单词打印出来
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	//将单词按字典序排列，并删除重复单词
	elimDups(words);
	//按长度排列，长度相同的单词维持字典序
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size();} );
	//获取一个迭代器，指向第一个满足size（）>= sz 的元素
	auto wc = find_if(words.begin(), words.end(), [sz](const string &s) { return s.size() >= sz;} );
	//计算size>=sz的元素数目
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
		 << " of length " << sz << " or longer" << endl;

	//打印长度大于等于给定值的单词，每个单词后面接一个空格
	for_each(wc, words.end(), [](const string &s){ cout << s << " ";} );
	cout << endl;

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

	//调用biggies，打印大于等于n个字符的单词
	biggies(svec, 4);

	/////////////////////////////////////////////////
	size_t v1 = 42;
	auto f = [v1]()mutable { return ++v1; };
	v1 = 0;
	auto  j = f();
	cout << j << endl;

	return 0;

}