//==========================================================================
//描述： 读取两个ISBN相同的Sales_item对象，输出它们的和
//==========================================================================
#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if ( item1.isbn() == item2.isbn() ){	//判断两个Sales_item对象的isbn是否相同
		std::cout << item1 + item2 << std::endl;
	}
	else {
		std::cout << "Different ISBN" << std::endl;
	}
	return 0;
}