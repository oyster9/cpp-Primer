//==========================================================================
//������ ��ȡ����ISBN��ͬ��Sales_item����������ǵĺ�
//==========================================================================
#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if ( item1.isbn() == item2.isbn() ){	//�ж�����Sales_item�����isbn�Ƿ���ͬ
		std::cout << item1 + item2 << std::endl;
	}
	else {
		std::cout << "Different ISBN" << std::endl;
	}
	return 0;
}