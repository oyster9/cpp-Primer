#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	//��ia������һ��vector��һ��list��
	vector<int> ivec(ia, end(ia));
	list<int> lst(ia, end(ia));	//�ȼ���list<int> lst(ivec.begin(), ivec.end())

	//��list��ɾ������Ԫ��
	for( auto it = lst.begin(); it != lst.end(); )
	{
		if( *it % 2 )
			it = lst.erase(it);	//ɾ��
		else
			++it;
	}
	//���, lst��ȫ��ż��
	cout << "lst:" << endl;
	for( auto it = lst.begin(); it != lst.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//��ivec��ɾ��ż��Ԫ��
	for( auto it = ivec.begin(); it != ivec.end(); )
	{
		if( !(*it % 2 ) )
			it = ivec.erase(it);
		else
			++it;
	}
	//���, ivec��ȫ������
	cout << "ivec:" << endl;
	for( auto it = ivec.begin(); it != ivec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	return 0;
}