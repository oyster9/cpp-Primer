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

	////������lst2����4 3 2 1
	//copy(lst.begin(), lst.end(), front_inserter(lst2));
	//for( auto it = lst2.begin(); it != lst2.end(); ++it )
	//	cout << *it << " ";
	//cout << endl;
	////������lst3����1 2 3 4
	//copy(lst.begin(), lst.end(), inserter(lst3, lst3.begin() ) );
	//for( auto it = lst3.begin(); it != lst3.end(); ++it )
	//	cout << *it << " ";
	//cout << endl;

	//ʹ��unique_copy��������һ��vector�в��ظ���Ԫ�ؿ�����һ����ʼΪ�յ�list��
	int a[] = { 1, 2, 2, 3, 3, 5, 6, 6, 7 };

	//��������
	vector<int> svec;
	list<int> sl;
	for( auto it = begin(a); it != end(a); ++it )
	{
		svec.push_back( *it );
	}
	//��ʾԭ��
	for( auto it = svec.begin(); it != svec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//����unique_copy���в��ظ�����
	unique_copy( svec.begin(), svec.end(), back_inserter(sl) );
	for( auto it = sl.begin(); it != sl.end(); ++it )
		cout << *it << " ";
	cout << endl;



	return 0;
}