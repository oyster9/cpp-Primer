#include<iostream>
#include<list>
#include<string>

using namespace std;

int main()
{
	list<string> sl;
	//从标准输入中读取string序列，存入list中
	for( string str; cin >> str; sl.push_back(str) );
	//打印list中的元素
	for( auto it = sl.cbegin(); it != sl.cend(); ++it )
		cout << *it << " ";
	cout << endl;

 

	return 0;
}