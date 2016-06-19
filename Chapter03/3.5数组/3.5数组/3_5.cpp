#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//---------------------3.5.1定义和初始化内置数组--------------------------------
	//显示初始化数组元素
	//int a[] = {0, 1, 2};//维度为3的数组
	//string a2[] = {"hi", "bye"};//等价于a2 [] = {"hi", "bye", " "}

	//不能将数组的内容拷贝给其他数组作为初始值
	//也不能用数组为其他数组赋值


	//-------------------3.5.2练习---------------------------------------
	//-------ex3.31-------------------
	//定义一个含有10个int的数组，令每个元素的值就是其下标的值
	int a[10];
	for (int i = 0; i != 10; ++i)
	{
		a[i] = i;
		cout << a[i] << " ";
	}	
	cout << endl;

	//------------ex3.32---------------------------
	//将上题创建的数组拷贝给另外一个数组，利用vector重写
	int a2[10];
	//将数组a[10]拷贝给数组a2[10]
	for (int i = 0; i != 10; ++i)
	{
		a2[i] = a[i];
		cout << a2[i] << " ";
	}	
	cout << endl;

	//vector 
	vector<int> iv;
	for (int i = 0; i != 10; ++i)
	{
		iv.push_back(i);
	}
	//拷贝
	vector<int> iv2(iv);
	for (auto it = iv2.begin(); it != iv2.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}