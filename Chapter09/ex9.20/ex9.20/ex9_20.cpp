/*
 *从一个list<int>拷贝元素到两个deque中，
 *值为偶数的所有元素都拷贝到一个deque中
 *值为奇数的所有元素都拷贝到令一个deque中
 */

#include<iostream>
#include<deque>
#include<list>

using namespace std;

int main()
{
	list<int> il;
	deque<int> odd, even;
	//从标准输入中读取list中元素
	for( int i = 0; cin >> i; il.push_back(i) );
	//根据list中元素的奇偶进行分类
	for( auto it = il.cbegin(); it != il.cend(); ++it )
		(( (*it) % 2 == 0 ) ? even : odd).push_back(*it);
	//输出
	if( !even.empty() )	//确保even非空，否则下面的操作将是未定义的
	{
		cout << "even: " << "\n";
		for( auto it = even.cbegin(); it != even.cend(); ++it )
			cout << *it << " ";
		cout << endl;
		cout << even.front() << endl;
	}
	if( !odd.empty() )
	{
		cout << "odd: " << "\n";
		for( auto it = odd.cbegin(); it != odd.cend(); ++it )
			cout << *it << " ";
		cout << endl;
		cout << odd.back() << endl;
	}

	return 0;
}