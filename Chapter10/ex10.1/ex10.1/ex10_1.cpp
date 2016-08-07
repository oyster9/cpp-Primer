#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>

using namespace std;

int main()
{
	//vector<int> ivec;
	////读入int序列存入vector中
	//for(int i; cin >> i && i!=999; ivec.push_back(i));
	//cout << ivec.size() << endl;
	////输入要计算出现次数的数
	//int ival = 0;
	//cout << "input a num: ";
	//cin >> ival;

	////调用count函数，返回给定值在序列中出现的次数
	//cout << ival << "出现的次数为" << count(begin(ivec), end(ivec), ival) << endl;

	list<string> ls;
	//读入string序列存入list中
	for(string str; cin >> str && str!="over"; ls.push_back(str));
	
	//输入要计算出现次数的string
	string s;
	cout << "input a string: ";
	cin >> s;

	//调用count函数，返回给定值在序列中出现的次数
	cout << s << "出现的次数为" << count(begin(ls), end(ls), s) << endl;
	
	return 0;
}