#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

//�Զ�ģʽ��һ���ļ����������ݶ��뵽һ��string��vector�У�
//��ÿһ����Ϊһ��������Ԫ�ش���vector��
void readFile( const string& FileName, vector<string> &vec )
{
	ifstream ifs(FileName); //����һ��ifstream���򿪸����ļ�

	if( ifs )	//�ж��Ƿ�ɹ����ļ�,���ɹ���������Ĵ���
	{
		string buf;
		//while( getline(ifs, buf) )	//��ÿһ����Ϊһ��������Ԫ�ش���vector��
		while( ifs >> buf ) //��ÿһ��������Ϊһ��������Ԫ�ؽ��д洢
			vec.push_back(buf);
	}
	else
	{
		cout << "Read file error!" << endl;
	}
}



int main()
{
	vector<string> vec;
	readFile("E:/Programing/cpp/cpp-Primer/Chapter08/ex8.4/test2.txt", vec);

	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << endl;



	return 0;
}
