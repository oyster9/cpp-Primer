#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//-------------------3.5.2��ϰ---------------------------------------
	//-------ex3.31-------------------
	//����һ������10��int�����飬��ÿ��Ԫ�ص�ֵ�������±��ֵ
	int a[10];
	for (int i = 0; i != 10; ++i)
	{
		a[i] = i;
		cout << a[i] << " ";
	}	
	cout << endl;

	//------------ex3.32---------------------------
	//�����ⴴ�������鿽��������һ�����飬����vector��д
	int a2[10];
	//������a[10]����������a2[10]
	for (int i = 0; i != 10; ++i)
	{
		a2[i] = a[i];
		cout << a2[i] << " ";
	}	
	cout << endl;

	//vector 
	vector<int> iv;
	//���������Ԫ��
	for (int i = 0; i != 10; ++i)
	{
		iv.push_back(i);
	}
	//����
	vector<int> iv2(iv);
	for (auto it = iv2.begin(); it != iv2.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}