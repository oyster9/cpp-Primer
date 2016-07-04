#include<iostream>
#include"Chapter6.h"

using namespace std;

//阶乘函数
int fact(int val)
{
	if ( val == 0 || val == 1)
		return 1;
	else 
		return val * fact( val - 1 );
}

//与用户的交互函数
void interative_func()
{
	cout << "Please input a integer:";
	int i;
	cin >> i;

	cout << "The result of " << i << "! is: " << fact(i) << endl;
}