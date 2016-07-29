#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	ofstream ofs;
	//ofs.open("result.txt");//打开文件用于写，若文件不存在就创建它
	ofs.open("E:/Programing/cpp/cpp-Primer/Chapter08/result.txt", //指定保存路径
		 ios::out | ios::app);//每次写操作前均定位到文件末尾
	//可以合并成一句话
	//ofstream ofs("result.txt");
	if ( ofs.is_open() )//检查open是否成功
	{	
		//ofs << "Hello world!" << endl;
		string str;
		//vector<string> vec;
		while( getline(cin,str)) //用getline读一行，可以包括空格
			ofs << str << endl;

		ofs.close();//要保存文件必须在这个时候关闭文件
	}
	return 0;
}