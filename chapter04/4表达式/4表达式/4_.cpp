#include<iostream>

using namespace std;

int main()
{
	//int i = 0, j;
	//j = ++i;//i先自增再赋值 j = 1, i = 1
	//cout <<  "j = " << j << "  " << "i = " << i << endl;
	//j = i++;//i先赋值再自增 i = 2, j = 1
	//cout <<  "j = " << j << "  " << "i = " << i << endl;

	//-------------------------------------
	//unsigned long ul1 = 3, ul2 = 7;
	//cout << (ul1 & ul2) << endl;//==3
	//cout << (ul1 | ul2) << endl;//==7
	//cout << (ul1 && ul2) << endl;//true ,==1
	//cout << (ul1 || ul2) << endl;//true , ==1

	//-----------------------------------------------
	//int x[10];
	//int *p = x;
	//cout << sizeof(x) / sizeof(*x) << endl;//输出数组x中的元素个数
	//cout << sizeof(p) / sizeof(*p) << endl;//意思是：（指针p所占空间的大小） /  （指针所指的对象占的空间大小）

	//------------------类型转换------------------------
	//int ival = 3.542 + 3;
	//cout << ival;//会有警告：可能损失数据

	int i = 3, j = 14;
	//强制类型转换以便执行浮点数除法
	double slope = static_cast<double> (j) / i;
	cout << slope << endl;

	return 0;
}