#include<iostream>
#include<string>

using namespace std;

int main()
{
	//string nums[] = {"one", "two", "three"};//�����Ԫ����string����
	//string *p = &nums[0];//pָ��nums�ĵ�һ��Ԫ��
	//string *p2 = nums; //�ȼ���p2 = &nums[0]
	//
	////��ʹ��������Ϊһ��auto�����ĳ�ʼֵʱ���ƶϵõ���������ָ���������
	//int ia[] = {0, 1, 2, 3, 4, 5};
	//auto ia2(ia);//ia2��һ������ָ�룬ָ��ia�ĵ�һ��Ԫ��
	//cout << *ia2; //���0
	////ע�⣺��ʹ��decltype�ؼ���ʱ��������
	////decltype��ia�����ص���������6���������ɵ�����


	//ָ��Ҳ�ǵ�����

	//��׼�⺯��begin��end��ʹ�ã��������鲻�������ͣ���ȷʹ����Ҫ��������Ϊ���ǵĲ���
	int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};//ia��һ������10������������
	int *beg = begin(ia);//ָ������ia ����Ԫ�ص�ָ��
	int *last = end(ia);//ָ��iaβԪ�ص���һλ��ָ��
	while (beg != last)//��ʾ����ia������Ԫ��
	{
		cout << *beg << " ";
		++beg;
	}
	cout << endl;

	//����ָ������Ľ���������ǵľ���
	auto n = end(ia) - begin(ia);//n��������ia��Ԫ�صĸ��� n = 10
	cout << n << endl;


	return 0;
}