#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	//将ia拷贝到一个vector和一个list中
	vector<int> ivec(ia, end(ia));
	list<int> lst(ia, end(ia));	//等价于list<int> lst(ivec.begin(), ivec.end())

	//从list中删除奇数元素
	for( auto it = lst.begin(); it != lst.end(); )
	{
		if( *it % 2 )
			it = lst.erase(it);	//删除
		else
			++it;
	}
	//输出, lst中全是偶数
	cout << "lst:" << endl;
	for( auto it = lst.begin(); it != lst.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//从ivec中删除偶数元素
	for( auto it = ivec.begin(); it != ivec.end(); )
	{
		if( !(*it % 2 ) )
			it = ivec.erase(it);
		else
			++it;
	}
	//输出, ivec中全是奇数
	cout << "ivec:" << endl;
	for( auto it = ivec.begin(); it != ivec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	return 0;
}