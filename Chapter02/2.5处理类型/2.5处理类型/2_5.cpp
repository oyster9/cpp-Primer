#include<iostream>
using namespace std;

int main()
{
	//----------------------2.5.1类型别名-------------------------------
/*	typedef double wages;//传统方法使用关键字typedef，这里wages是double的同义词
	//新标准使用 别名声明 用关键字using 
	//using SI = Sales_item；//2010不支持

	//--------------------2.5.2auto类型说明符----------------------------
	//auto让编译器通过初始值来推算变量的类型，因此auto定义的变量必须有初始值
	int val1, val2;
	auto sum = val1 + val2;//sum初始化为val1和val2相加的结果

	//一条声明语句只能有一个基本数据类型，因此在一条语句中声明多个变量时该语句中
	//所有变量的初始基本数据类型必须一样
	//auto也一样
	auto i = 0, *p = &i;//正确：i是整数，p是整型指针
	//auto j = 0, pi = 3.14;//错误：j和pi的类型不一致
*/
	//----------------------2.5.3decltype类型指示符----------------------------
	//decltype的作用是选择并返回操作数的数据类型

	const int ci = 0, &cj = ci;
	decltype(ci) x = 0;//x 的类型是const int 
	decltype(cj) y = x;//y的类型是const int &，y绑定到变量x
	//decltype(cj) z;//错误：z是一个引用，必须初始化

	//decltype的结果可以是引用类型
	int i = 42, *p = &i, &r = i;
	decltype( r + 0 ) b;//正确：返回表达式结果对应的类型，加法的结果是int，b是一个（未初始化）的int
	                    //r是一个引用，decltype（r）的结果是引用类型
	//decltype(*p) c; //错误：c是int&，必须初始化

	//decltype的表达式如果是加了括号的变量，结果永远是引用 decltype（ （variable） ）
	//decltype( (i) ) d;//错误：d是int&，是一个引用，必须初始化
	decltype(i) e;//正确：e是int型（未初始化）

	return 0;
}