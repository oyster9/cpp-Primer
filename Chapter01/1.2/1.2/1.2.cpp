//========================================================
//描述：两个数相加
//========================================================

#include<iostream>
int main()
{
	//提示用户输入两个数
	std::cout << "Enter two number:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;	//读取输入数据
	std::cout << "The sum of " << v1 << " and " << v2
		      << " is " << v1 + v2 << std::endl;

	return 0;
}