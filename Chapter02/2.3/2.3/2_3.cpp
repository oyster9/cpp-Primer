#include<iostream>
using namespace std;

int main()
{
	//���ɿ�ָ������ַ���
	/*int *p1 = nullptr;
	int *p2 = 0;*/

	//int i = 42;
	//int *p1 = &i;
	//*p1 = *p1 * *p1;
	//cout << *p1 << endl;

	//-----------------------��⸴�����͵�����----------------------
	//i��int���͵�����p��int�͵�ָ�룬 r��һ��int�͵�����
	//int i = 100, *p = &i, &r = i;

	//int* p1, p2;//p1��ָ��int��ָ�룬 p2��int �����Ҫ�����

	//ָ��ָ���ָ��
	//int ival = 110;
	//int *pi = &ival;//piָ��һ��int�͵���
	//int **ppi = &pi;//ppiָ��һ��int�͵�ָ��
	//cout << "*pi=" << *pi  << "  " << "*ppi=" << *ppi << "\n"
	//	 <<"**ppi=" << **ppi  << "  " << "pi=" << pi << "  "<<endl;

	//ָ��ָ�������
	//���ñ����Ƕ��󣬲��ܶ���ָ�����õ�ָ��
	//����ָ���Ƕ��󣬴��ڶ�ָ�������
	int i = 42;
	int *p;
	int *&r = p;//r�Ƕ�ָ��p������
	r = &i;//��r��ֵ&i������ָ��pָ��i
	*r = 0;//�����õõ�i����i��ֵ��Ϊ0
	cout << i << "  " << *p << endl;


	
	return 0;
}