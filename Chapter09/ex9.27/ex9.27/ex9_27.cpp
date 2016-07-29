#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
	forward_list<int> flst;
	for( int i = 0; i != 10; ++i )
		flst.push_front(i);
	//���forward_list�е�Ԫ��
	cout << "forward_list:" << endl;
	for( auto it = flst.begin(); it != flst.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//ɾ�����е�����
	auto prev = flst.before_begin(); //��ǰ������
	auto curr = flst.begin(); //ָ��flst�ĵ�һ��Ԫ��
	while ( curr != flst.end() ) {  //
		if( *curr % 2 ) //���Ϊ����
			curr = flst.erase_after(prev);	//ɾ�����ƶ�curr��flst.erase_after����ָ��ɾ��Ԫ��֮��Ԫ�صĵ�����
		else { //�ƶ�������curr�� prevָ��curr֮ǰ��Ԫ��
			prev = curr;
			++curr;
		}
	}
	//���ɾ���������flst
	cout << "ɾ���������forward_list:" << endl;
	for( auto it = flst.begin(); it != flst.end(); ++it )
		cout << *it << " ";
	cout << endl;

	return 0;
}