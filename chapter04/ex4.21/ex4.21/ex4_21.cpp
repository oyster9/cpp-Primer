//--------------------------------------------------------------------------------
//������ʹ�������������vector<int>���ҵ���ЩԪ�ص�ֵ��������Ȼ����Щ����ֵ����
//--------------------------------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>  iv;
	//���vector�������Ԫ��
	int i;
	while( cin >> i)
	{
		iv.push_back(i);
	}
	//��ȡvector�е�Ԫ��
	for (auto it = iv.begin(); it != iv.end(); ++it)
		cout << ( ( (*it) & 0x01 ) ? (*it) * 2 : *it ) << "  ";//�ж��Ƿ�Ϊ�������ǵĻ�  ֵ*2
	cout << endl;

	return 0;
}