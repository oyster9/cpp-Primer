//=============================================================
// 描述：提示用户输入两个数，打印出这两个数所指定范围内的
//		 所有整数
//=============================================================
#include<iostream>

int main()
{
	std::cout << "Enter two number: ";
	int low, high;
	std::cin >> low >> high;
	while(low<=high){
		std::cout << low << " ";
		++low;
	}
	return 0;
}