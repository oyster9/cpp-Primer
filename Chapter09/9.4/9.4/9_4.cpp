#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> ivec;
	//����capacity��size
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;
	//��ivec���10��Ԫ��
	for( vector<int>::size_type i = 0; i < 10; i++ )
		ivec.push_back(i);
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;
	//Ԥ����һЩ����ռ�
	ivec.reserve(50);	//��ʱsize����10������capacity�� ���ڵ��� 50,����ֵ������׼��ʵ��
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;

	//�򵥿���vector�����������
	vector<int> vec2;
	for( vector<int>::size_type i = 0; i != 100; ++i )
	{
		vec2.push_back(i);
		cout << "size:" << vec2.size() << "  capacity:" << vec2.capacity() << endl;
	}
	return 0;
}
