#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
	vector<int> ivec;
	auto it = back_inserter(ivec);//�������������ivec�в���Ԫ��
	*it = 20; //ivec������Ԫ��20
	fill_n(back_inserter(ivec), 10, 1);//���10��1��ivec��
	for( auto it = ivec.begin(); it != ivec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	////�����㷨
	//int a1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int a2[sizeof(a1)/sizeof(*a1)];
	////retָ�򿽱���a2��βԪ��֮���λ��
	//auto ret = copy(begin(a1), end(a1), a2);//��a1�����ݿ�����a2
	////��ʾ
	//for( auto it = begin(a2); it != begin(a2)+10; ++it )//end(a2)
	//	cout << *it << " ";
	//cout << endl;
	//replace�㷨
	replace(ivec.begin(), ivec.end(), 1, 10);//��ivec�е�1 �滻Ϊ10
	for( auto it = ivec.begin(); it != ivec.end(); ++it )
		cout << *it << " ";
	cout << endl;
	return 0;
}