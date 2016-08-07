#include<iostream>
#include<vector>
#include<list>
//#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
	vector<int> ivec;
	list<int> lst;
	for( int i = 0; i != 10; ++i )
		ivec.push_back(i);
	//将位置3和7之间的元素按逆序拷贝到一个list中
	copy( ivec.rbegin()+3, ivec.rbegin()+8, back_inserter(lst) );
	//显示
	for( auto it = lst.begin(); it != lst.end(); ++it )
		cout << *it << " ";
	cout << endl;

	return 0;
}