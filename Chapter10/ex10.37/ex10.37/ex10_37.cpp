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
	//��λ��3��7֮���Ԫ�ذ����򿽱���һ��list��
	copy( ivec.rbegin()+3, ivec.rbegin()+8, back_inserter(lst) );
	//��ʾ
	for( auto it = lst.begin(); it != lst.end(); ++it )
		cout << *it << " ";
	cout << endl;

	return 0;
}