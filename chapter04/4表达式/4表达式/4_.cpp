#include<iostream>

using namespace std;

int main()
{
	int i = 0, j;
	j = ++i;//i�������ٸ�ֵ j = 1, i = 1
	cout <<  "j = " << j << "  " << "i = " << i << endl;
	j = i++;//i�ȸ�ֵ������ i = 2, j = 1
	cout <<  "j = " << j << "  " << "i = " << i << endl;


	return 0;
}