#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//����һ������10��������vector����
	//Ȼ���õ�����������Ԫ�ر��ԭ��������
	vector<int> iv;//��vector����(û������ֻ����10��Ԫ�أ��Ƕ�̬���Ԫ�ص�)
	//���������10������
	cout << "Please input ten int numbers:" << "\n";
	int a;
	while (cin >> a)
	{
		iv.push_back(a);
	}
		
	//��ʾ�������
	cout << "��ʾ�������:" << endl;
	for ( auto it = iv.begin(); it != iv.end(); ++it)
	{
		cout << *it << " ";
	}
	//��ʾԭ��Ԫ�ص�2��
	cout << endl;
	cout << "��ʾԭ��Ԫ�ص�2��:" << endl;
	for ( auto it = iv.begin(); it != iv.end(); ++it)
	{
		cout << (*it) * 2 << " ";
	}
		
	return 0;
}