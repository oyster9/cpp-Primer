#include<iostream>
using namespace std;

//int i = 42;
int main()
{
	//int i = 100;//������ȫ�ֱ���i
	//int j = i;//j = 100
	//cout << j ;
	
	int i = 100, sum = 0;
	for(int i = 0; i != 10; ++i)//����i���������������for�����
		sum += i;
	cout << i << "  " << sum << endl;// i = 100; sum = 45

	return 0;
}