#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	//-----------------------3.3.1����ͳ�ʼ��vector����------------------------------------
	//vector<string> svec;
	//vector<string> svec2(svec);//��svec��Ԫ�ؿ�����svec2������vector��������ͱ�����ͬ
	//����ָ��������Ԫ��
	//vector<int> ivec(10, -1);//10��int���͵�Ԫ�أ�ÿ��������ʼ��Ϊ-1
	//for( decltype(ivec.size()) i = 0; i != 10; ++i)
	//	cout << ivec[i] << " ";
	//cout << endl;

	//vector<int> iv(10); //iv��10��Ԫ�أ�ÿ����ֵ����ʼ��Ϊ0
	//vector<string> svec(10, "null");//10��string���͵�Ԫ�أ�ÿ��������ʼ��Ϊ��null��
	//for( decltype(svec.size()) i = 0; i != 10; ++i)
	//	cout << svec[i] << " ";
	//cout << endl;

	//��vector���������Ԫ��
	//�ȴ���һ����vector��Ȼ��������ʱ������vector�ĳ�Ա����push_back
	//���������Ԫ��
	/*vector<int> iv;
	for( int i = 0; i != 100; ++i)
		iv.push_back(i);*/
	//ѭ��������iv��100��Ԫ�أ�ֵ��0��99


	//����vector�ڶ��������
	//��10��Ϊһ��������ͳ�Ƴɼ�������
	vector<unsigned> scores(11, 0); //11�������Σ�ȫ����ʼ��Ϊ0
	unsigned grade;
	while( cin >> grade ) //��ȡ�ɼ�
	{
		if( grade <= 100 )
			++scores[grade/10];
	}



	return 0;
}