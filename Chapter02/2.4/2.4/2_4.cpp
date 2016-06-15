#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	//const int bufSize = 213;
	////bufSize =  321;//错误：不能向const对象写值

	////const对象必须初始化
	////const int i;//wrong
	//const int i = 100;//编译时初始化

	//只能在const类型的对象上执行不改变其内容的操作

/*	//------------2.4.1const的引用------------------------------
 *	//对常量的引用不能被用作修改它所绑定的对象
 *	const int ci = 1024;
 *	const int &r1 = ci;//正确：引用及其对应的对象都是常量
 *	//r1 = 30;//错误：r1是对常量的引用，不能更改其值
 *	//int &r2 = ci;//错误：试图让非常量引用指向一个常量对象
 *
 *
 *	//const引用对于引用对象本身是不是一个常量未作限定
 *	int i = 42;
 *	const int &r2 = i;//r2绑定i（非常量）合法，但是不允许通过r2修改i的值,
 *					  //注意,此时i的值是可以改变的，因r2绑定了i，当i改变时r2的值也就对应的改变了
 *	 i = 10;
 *	 cout << i << "  " << r2 << endl;// i = 10 = r2
 */

/*	//-------------------2.4.2指针和const--------------------------------
	//const pointer(常量指针)必须初始化，常量指针不变的是指针本身的值而不是指向的那个值
	int i = 90;
	int *const ip = &i;//ip是一个常量指针，指向一个int型对象
	*ip = 10;//改变ip所指向的值i = 10
	cout << "i = " << i << "	" << "*ip = " << *ip << endl;

	const double  j= 3.14;
	const double *const ccp = &j;//ccp是一个常量指针，指向一个double型常量对象
	//*ccp = 23;//错误：ccp是一个指向常量的常量指针，无论是ccp所指的对象还是ccp自己
	          //存储的那个地址都不能改变

*/

	//--------------------2.4.3顶层const----------------------------------
	//顶层const表示指针是一个常量
	//底层const表示指针所指的对象是一个常量

	return 0;
}