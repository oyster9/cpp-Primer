#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

//以读模式打开一个文件，将其内容读入到一个string的vector中，
//将每一行作为一个独立的元素存于vector中
void readFile( const string& FileName, vector<string> &vec )
{
	ifstream ifs(FileName); //构造一个ifstream并打开给定文件

	if( ifs )	//判断是否成功打开文件,若成功继续下面的处理
	{
		string buf;
		//while( getline(ifs, buf) )	//将每一行作为一个独立的元素存于vector中
		while( ifs >> buf ) //将每一个单词作为一个独立的元素进行存储
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
