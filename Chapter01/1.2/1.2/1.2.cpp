//========================================================
//���������������
//========================================================

#include<iostream>
int main()
{
	//��ʾ�û�����������
	std::cout << "Enter two number:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;	//��ȡ��������
	std::cout << "The sum of " << v1 << " and " << v2
		      << " is " << v1 + v2 << std::endl;

	return 0;
}