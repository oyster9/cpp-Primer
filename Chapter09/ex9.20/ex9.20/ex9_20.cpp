/*
 *��һ��list<int>����Ԫ�ص�����deque�У�
 *ֵΪż��������Ԫ�ض�������һ��deque��
 *ֵΪ����������Ԫ�ض���������һ��deque��
 */

#include<iostream>
#include<deque>
#include<list>

using namespace std;

int main()
{
	list<int> il;
	deque<int> odd, even;
	//�ӱ�׼�����ж�ȡlist��Ԫ��
	for( int i = 0; cin >> i; il.push_back(i) );
	//����list��Ԫ�ص���ż���з���
	for( auto it = il.cbegin(); it != il.cend(); ++it )
		(( (*it) % 2 == 0 ) ? even : odd).push_back(*it);
	//���
	if( !even.empty() )	//ȷ��even�ǿգ���������Ĳ�������δ�����
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