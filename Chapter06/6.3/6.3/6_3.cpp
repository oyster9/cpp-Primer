#include<iostream>
using namespace std;

void swap(int &v1, int &v2)
{
	if (v1 == v2)
		return; //ֵ�����ֱ���˳�
	int tmp;
	tmp = v1;
	v1 = v2;
	v2 = tmp;
	cout << v1 << " " << v2 << endl;
}

auto func(int i) -> int(*) [10];//ʹ��β�÷������ͣ�func���ص���һ��ָ�룬��ָ��ָ����10������������

int main()
{
	int i, j;
	cin >> i >> j;
	swap(i,j);
	return 0;
}