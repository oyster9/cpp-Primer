#include<iostream>

using namespace std;

int main()
{
	//int i = 0, j;
	//j = ++i;//i�������ٸ�ֵ j = 1, i = 1
	//cout <<  "j = " << j << "  " << "i = " << i << endl;
	//j = i++;//i�ȸ�ֵ������ i = 2, j = 1
	//cout <<  "j = " << j << "  " << "i = " << i << endl;

	//-------------------------------------
	//unsigned long ul1 = 3, ul2 = 7;
	//cout << (ul1 & ul2) << endl;//==3
	//cout << (ul1 | ul2) << endl;//==7
	//cout << (ul1 && ul2) << endl;//true ,==1
	//cout << (ul1 || ul2) << endl;//true , ==1

	//-----------------------------------------------
	//int x[10];
	//int *p = x;
	//cout << sizeof(x) / sizeof(*x) << endl;//�������x�е�Ԫ�ظ���
	//cout << sizeof(p) / sizeof(*p) << endl;//��˼�ǣ���ָ��p��ռ�ռ�Ĵ�С�� /  ��ָ����ָ�Ķ���ռ�Ŀռ��С��

	//------------------����ת��------------------------
	//int ival = 3.542 + 3;
	//cout << ival;//���о��棺������ʧ����

	int i = 3, j = 14;
	//ǿ������ת���Ա�ִ�и���������
	double slope = static_cast<double> (j) / i;
	cout << slope << endl;

	return 0;
}