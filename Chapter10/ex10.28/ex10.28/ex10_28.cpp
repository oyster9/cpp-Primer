#include<iostream>
#include<iterator>
#include<vector>
#include<list>

using namespace std;

int main()
{
	vector<int> ivec;
	list<int> lst1, lst2, lst3;
	for( int i = 1; i != 10; ++i )
		ivec.push_back(i);
	for( auto it = ivec.begin(); it != ivec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//分别用inserter、 back_inserter、 front_inserter拷贝到三个容器
	copy(ivec.begin(), ivec.end(), inserter(lst1, lst1.begin()));//1 2 3 4 5 6 7 8 9 
	copy(ivec.begin(), ivec.end(), back_inserter(lst2));//1 2 3 4 5 6 7 8 9 
	copy(ivec.begin(), ivec.end(), front_inserter(lst3));//9 8 7 6 5 4 3 2 1
	//输出
	cout << "inserter:" << endl;
	for( auto it = lst1.begin(); it != lst1.end(); ++it )
		cout << *it << " ";
	cout << endl;
	cout << "back_inserter:" << endl;
	for( auto it = lst2.begin(); it != lst2.end(); ++it )
		cout << *it << " ";
	cout << endl;
	cout << "front_inserter:" << endl;
	for( auto it = lst3.begin(); it != lst3.end(); ++it )
		cout << *it << " ";
	cout << endl;
	return 0;
}