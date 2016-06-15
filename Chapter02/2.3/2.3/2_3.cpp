#include<iostream>
using namespace std;

int main()
{
	//生成空指针的两种方法
	/*int *p1 = nullptr;
	int *p2 = 0;*/

	//int i = 42;
	//int *p1 = &i;
	//*p1 = *p1 * *p1;
	//cout << *p1 << endl;

	//-----------------------理解复合类型的声明----------------------
	//i是int类型的数，p是int型的指针， r是一个int型的引用
	//int i = 100, *p = &i, &r = i;

	//int* p1, p2;//p1是指向int的指针， p2是int （这点要清除）

	//指向指针的指针
	//int ival = 110;
	//int *pi = &ival;//pi指向一个int型的数
	//int **ppi = &pi;//ppi指向一个int型的指针
	//cout << "*pi=" << *pi  << "  " << "*ppi=" << *ppi << "\n"
	//	 <<"**ppi=" << **ppi  << "  " << "pi=" << pi << "  "<<endl;

	//指向指针的引用
	//引用本身不是对象，不能定义指向引用的指针
	//但是指针是对象，存在对指针的引用
	int i = 42;
	int *p;
	int *&r = p;//r是对指针p的引用
	r = &i;//给r赋值&i就是令指针p指向i
	*r = 0;//解引用得到i，将i的值改为0
	cout << i << "  " << *p << endl;


	
	return 0;
}