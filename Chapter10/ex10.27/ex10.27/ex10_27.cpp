#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<fstream>
#include<list>
#include<iterator>

using namespace std;

int main()
{
	//list<int> lst, lst2, lst3;
	//for( int i = 1; i != 5; ++i )
	//{
	//	lst.push_back(i);
	//}
	//for( auto it = lst.begin(); it != lst.end(); ++it )
	//	cout << *it << " ";
	//cout << endl;

	////拷贝后，lst2包含4 3 2 1
	//copy(lst.begin(), lst.end(), front_inserter(lst2));
	//for( auto it = lst2.begin(); it != lst2.end(); ++it )
	//	cout << *it << " ";
	//cout << endl;
	////拷贝后，lst3包含1 2 3 4
	//copy(lst.begin(), lst.end(), inserter(lst3, lst3.begin() ) );
	//for( auto it = lst3.begin(); it != lst3.end(); ++it )
	//	cout << *it << " ";
	//cout << endl;

	//使用unique_copy函数，将一个vector中不重复的元素拷贝到一个初始为空的list中
	int a[] = { 1, 2, 2, 3, 3, 5, 6, 6, 7 };

	//读入容器
	vector<int> svec;
	list<int> sl;
	for( auto it = begin(a); it != end(a); ++it )
	{
		svec.push_back( *it );
	}
	//显示原文
	for( auto it = svec.begin(); it != svec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//调用unique_copy进行不重复拷贝
	unique_copy( svec.begin(), svec.end(), back_inserter(sl) );
	for( auto it = sl.begin(); it != sl.end(); ++it )
		cout << *it << " ";
	cout << endl;



	return 0;
}