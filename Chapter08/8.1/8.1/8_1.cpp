#include<iostream>
using namespace std;

int main()
{
	//int ival;
	////cin >> ival;

	//auto old_state = cin.rdstate();		//��סcin�ĵ�ǰ״̬
	//cin.clear();		//�������и�λ��ʹcin��Ч
	////process_input(cin);
	//cin >> ival;
	//cin.setstate(old_state);	//��cin��Ϊԭ��״̬

	//8.1.3 ��������

	//ˢ�����������
	//cout << "hello" << endl;	//���hello��һ�����У�Ȼ��ˢ�»�����
	//cout << "hello" << ends;	//���hello��һ�����ַ���Ȼ��ˢ�»�����
	//cout << "hello" << flush;	//���hello��Ȼ��ˢ�»�������û�ж��������ַ�

	//
	cout << unitbuf;
	cout << "hello" << ends;	
	cout << "hello" << flush;
	return 0;
}
