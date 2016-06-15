#include<iostream>
using namespace std;

int main()
{
	//int i = 110;
	//int &r = i;//r是一个引用，与i绑定在一起
	//cout << r <<endl; //r = i = 110

	//-----------------2.15---------------------
	//int ival = 1.01;//ival = 1
	////int &ival1 = 1.01;//错误：非常量引用的初始值必须为左值
	//int &ival2 = ival;
	////int &ival3;//错误：引用必须被初始化
	//cout << ival2 << endl;

	//-----------------2.16-----------------------
	//int i = 0, &r1 = i;
	//double d = 0, &r2 = d;
	//r2 = 3.14;//把3.14赋给r2指向的对象，即赋给d
	////cout << "r2 = " << r2 << "   d = " << d << endl;
	////r2 = r1;//把r1指向的i的值0赋给r2指向的对象d，这里 r2 = d = 0
	//i = r2;//i= 3
	//r1 = d;//r1 = 3
	//cout << r1 << endl;
	////cout << "r2 = " << r2 << "   d = " << d << endl;

	//-----------------2.17-------------------------------
	int i, &ri = i;//定义时没有初始化，有一个不确定值
	cout << i << "  " << ri << endl;
	i = 5;//i = ri = 5
	cout << i << "  " << ri << endl;
	ri = 10;
	cout << i << "  " << ri << endl;//i = ri = 10


	return 0;
}