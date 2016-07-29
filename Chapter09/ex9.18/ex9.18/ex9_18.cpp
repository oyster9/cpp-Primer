/*
 *编写程序，从标准输入读取string序列，存入一个deque中
 *编写循环，用迭代器打印deque中的元素
 */
#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main()
{
	deque<string> sd;
	for( string str; cin >> str; sd.push_back(str) );
	//用迭代器打印deque中的元素
	for( auto it = sd.cbegin(); it != sd.cend(); ++it )
		cout << *it << " ";
	cout << endl;

	return 0;
}

