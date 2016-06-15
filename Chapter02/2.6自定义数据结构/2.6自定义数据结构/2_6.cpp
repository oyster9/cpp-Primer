//-----------------------------------------------------------
//描述：实现将具有相同ISBN的书的交易相加
//      每笔交易记录书的ISBN、售出数量和售出单价
//------------------------------------------------------------

#include<iostream>
#include<string>
#include"Sales_data.h"
using namespace std;

int main()
{
	Sales_data data1, data2;
	double price;
	//这里手动输入交易
	//读入第一笔交易
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold *price;
	//读入第二笔交易
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold *price;

	//输出两个Sales_data对象的和
	if( data1.bookNo == data2.bookNo )//如果两本书的ISBN相同
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;//总销售量
		double totalRevenue = data1.revenue + data2.revenue; //总销售额

		cout << "ISBN:" << data1.bookNo << "  totalCnt:" << totalCnt 
			 << "  totalRevenue:" <<  totalRevenue ;

		//计算平均价格
		if(totalCnt != 0)
			cout << "  averagePrice:" <<  totalRevenue / totalCnt << endl;
		else 
			cout << "No Sales!" << endl;
	}
	else //如果两本书的ISBN不同
	{
			cerr << "Data must refer to the same ISBN" << endl;
			return -1;
	}

	return 0;
}