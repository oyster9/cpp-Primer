#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item total;	//���׼�¼����
	//�����һ�����׼�¼����ȷ�������ݿ��Դ���
	if (std::cin >> total) {
		Sales_item trans;
		//���벢����ʣ�ཻ�׼�¼
		while(std::cin >> trans){
			if( total.isbn() == trans.isbn())
				total += trans;	//���������۶�
			else{
				//��ӡǰһ����Ľ��
				std::cout << total << std::endl;
				total = trans; //total ���ڱ�ʾ��һ��������۶�
			}
		}//whileѭ������
		//��ӡ���һ����Ľ��
		std::cout << total <<std::endl;
	}else {
		//û�����룬����
		std::cerr << "No data?!" << std::endl;
		return -1;	//��ʾʧ��
	}

	return 0;
}