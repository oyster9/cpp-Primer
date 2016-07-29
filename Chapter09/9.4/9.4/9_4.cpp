#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> ivec;
	//区分capacity和size
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;
	//向ivec添加10个元素
	for( vector<int>::size_type i = 0; i < 10; i++ )
		ivec.push_back(i);
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;
	//预分配一些额外空间
	ivec.reserve(50);	//此时size还是10，但是capacity会 大于等于 50,具体值依赖标准库实现
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;

	//简单看看vector是如何增长的
	vector<int> vec2;
	for( vector<int>::size_type i = 0; i != 100; ++i )
	{
		vec2.push_back(i);
		cout << "size:" << vec2.size() << "  capacity:" << vec2.capacity() << endl;
	}
	return 0;
}
