//------------------------------------------------------------
//��������ȡ���������ͬISBN�����ۼ�¼��������м�¼�ĺ�
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
		while(cin >> item) //�м�¼
		{
			if( sum.isbn() == item.isbn() ) //ISBN��ͬ
				sum += item;
			else
			{
				cout << sum << endl; //��ӡǰһ����Ľ��
				sum = item; //����sum��ʾ��һ����
			}
				
		}//whileѭ������
		//��ӡ���һ����Ľ��
		cout << sum << endl;
	}//if

	return 0;
	
}