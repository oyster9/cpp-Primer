//-----------------------------------------------------------
//������ʵ�ֽ�������ͬISBN����Ľ������
//      ÿ�ʽ��׼�¼���ISBN���۳��������۳�����
//------------------------------------------------------------

#include<iostream>
#include<string>
#include"Sales_data.h"
using namespace std;

int main()
{
	Sales_data data1, data2;
	double price;
	//�����ֶ����뽻��
	//�����һ�ʽ���
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold *price;
	//����ڶ��ʽ���
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold *price;

	//�������Sales_data����ĺ�
	if( data1.bookNo == data2.bookNo )//����������ISBN��ͬ
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;//��������
		double totalRevenue = data1.revenue + data2.revenue; //�����۶�

		cout << "ISBN:" << data1.bookNo << "  totalCnt:" << totalCnt 
			 << "  totalRevenue:" <<  totalRevenue ;

		//����ƽ���۸�
		if(totalCnt != 0)
			cout << "  averagePrice:" <<  totalRevenue / totalCnt << endl;
		else 
			cout << "No Sales!" << endl;
	}
	else //����������ISBN��ͬ
	{
			cerr << "Data must refer to the same ISBN" << endl;
			return -1;
	}

	return 0;
}