#include<iostream>
#include<list>
#include<string>

using namespace std;

int main()
{
	list<string> sl;
	//�ӱ�׼�����ж�ȡstring���У�����list��
	for( string str; cin >> str; sl.push_back(str) );
	//��ӡlist�е�Ԫ��
	for( auto it = sl.cbegin(); it != sl.cend(); ++it )
		cout << *it << " ";
	cout << endl;

 

	return 0;
}