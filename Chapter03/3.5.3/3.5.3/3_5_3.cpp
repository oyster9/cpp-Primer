#include<iostream>
#include<string>

using namespace std;

int main()
{
	//string nums[] = {"one", "two", "three"};//数组的元素是string对象
	//string *p = &nums[0];//p指向nums的第一个元素
	//string *p2 = nums; //等价于p2 = &nums[0]
	//
	////当使用数组作为一个auto变量的初始值时，推断得到的类型是指针而非数组
	//int ia[] = {0, 1, 2, 3, 4, 5};
	//auto ia2(ia);//ia2是一个整型指针，指向ia的第一个元素
	//cout << *ia2; //输出0
	////注意：当使用decltype关键字时不会这样
	////decltype（ia）返回的类型是由6个整数构成的数组


	//指针也是迭代器

	//标准库函数begin和end的使用，由于数组不是类类型，正确使用是要把数组作为它们的参数
	int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};//ia是一个含有10个整数的数组
	int *beg = begin(ia);//指向数组ia 的首元素的指针
	int *last = end(ia);//指向ia尾元素的下一位的指针
	while (beg != last)//显示数组ia的所有元素
	{
		cout << *beg << " ";
		++beg;
	}
	cout << endl;

	//两个指针相减的结果就是它们的距离
	auto n = end(ia) - begin(ia);//n就是数组ia中元素的个数 n = 10
	cout << n << endl;


	return 0;
}