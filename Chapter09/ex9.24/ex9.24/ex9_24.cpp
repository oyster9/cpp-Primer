//�ֱ�ʹ��at���±��������front��begin
//��ȡһ��vector�еĵ�һ��Ԫ��
//��һ����vector��������

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> ivec;
	for( int i = 1; i < 5; i++ )
	{
		ivec.push_back(i);
	}
	//��ȡ��һ��Ԫ��
	cout << ivec.at(0) << "\n"
		 << ivec[0] << "\n"
		 << ivec.front() << "\n"
		 << *ivec.cbegin() << endl;   
	return 0;
}