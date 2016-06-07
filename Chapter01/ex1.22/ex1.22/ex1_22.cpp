//------------------------------------------------------------
//描述：读取多个具有相同ISBN的销售记录，输出所有记录的和
//------------------------------------------------------------

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item sum;
	if (cin >> sum)
	{
		Sales_item item;
		while(cin >> item) //有记录
		{
			if( sum.isbn() == item.isbn() ) //ISBN相同
				sum += item;
			else
			{
				cout << sum << endl; //打印前一本书的结果
				sum = item; //现在sum表示下一本书
			}
				
		}//while循环结束
		//打印最后一本书的结果
		cout << sum << endl;
	}//if

	return 0;
	
}