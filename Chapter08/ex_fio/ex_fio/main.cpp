#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	ofstream ofs;
	//ofs.open("result.txt");//���ļ�����д�����ļ������ھʹ�����
	ofs.open("E:/Programing/cpp/cpp-Primer/Chapter08/result.txt", //ָ������·��
		 ios::out | ios::app);//ÿ��д����ǰ����λ���ļ�ĩβ
	//���Ժϲ���һ�仰
	//ofstream ofs("result.txt");
	if ( ofs.is_open() )//���open�Ƿ�ɹ�
	{	
		//ofs << "Hello world!" << endl;
		string str;
		//vector<string> vec;
		while( getline(cin,str)) //��getline��һ�У����԰����ո�
			ofs << str << endl;

		ofs.close();//Ҫ�����ļ����������ʱ��ر��ļ�
	}
	return 0;
}