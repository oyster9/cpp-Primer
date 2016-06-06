#include<iostream>
#include"Sales_item.h"

int main()
{
	/*
	Sales_item book;
	//读入ISBN号、售出的册数以及销售价格
	std::cin >> book;
	//写入ISBN号、售出的册数以及销售价格
	std::cout << book << std::endl;
	*/

	//将两个Sales_item对象相加
	Sales_item item1, item2;
	std::cin >> item1 >> item2;	//读取一对交易记录
	std::cout << item1 + item2 << std::endl;	//打印他们的和

	return 0;
}