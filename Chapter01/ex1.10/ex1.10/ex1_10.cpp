//=================================================================
//描述：使用递减运算符（--）在循环中按递减顺序打印10到0之间的整数
//=================================================================
#include<iostream>
int main()
{
	int val = 10;
	while(val >= 0){
		//std::cout << val <<std::endl; //换行显示
		std::cout << val << " "; //在同一行显示
		--val;
	}

	return 0;
}