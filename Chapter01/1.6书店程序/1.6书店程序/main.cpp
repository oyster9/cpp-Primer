#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item total;	//交易记录变量
	//读入第一条交易记录，并确保有数据可以处理
	if (std::cin >> total) {
		Sales_item trans;
		//读入并处理剩余交易记录
		while(std::cin >> trans){
			if( total.isbn() == trans.isbn())
				total += trans;	//更新总销售额
			else{
				//打印前一本书的结果
				std::cout << total << std::endl;
				total = trans; //total 现在表示下一本书的销售额
			}
		}//while循环结束
		//打印最后一本书的结果
		std::cout << total <<std::endl;
	}else {
		//没有输入，警告
		std::cerr << "No data?!" << std::endl;
		return -1;	//表示失败
	}

	return 0;
}