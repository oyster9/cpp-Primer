#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	////ʹ�õ�������string����ĵ�һ����ĸ��Ϊ��д
	//string s("some string");
	//if( s.begin() != s.end() ) //ȷ��s�ǿ�
	//{
	//	auto it = s.begin();//it��ʾs�ĵ�һ���ַ�
	//	*it = toupper(*it); //����ǰ�ַ��ĳɴ�д��ʽ
	//}
	////������
	//for(auto it = s.begin(); it != s.end(); ++it)
	//	cout << *it;//Some string
	//cout << endl;

	////����������һ��Ԫ���ƶ�������һ��Ԫ��
	////��������ַ���s�е���ĸȫ����Ϊ��д
	//for(auto it2 = s.begin(); it2 != s.end(); ++it2)
	//{
	//	*it2 = toupper(*it2);
	//	cout << *it2;
	//}

	//ʹ�õ�������һ�������㷨--��������
	//Ҫ������������
	string text=("abcdefghijklmnopqrst");//
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;//��ʼ״̬�µ��м��
	//����Ҫ���ҵĶ���
	cout << "Please input a character:" << endl;
	char sought;
	cin >> sought;
	//���ж�������
	while( mid != end && *mid != sought )
	{
		if( sought < *mid )
			end = mid;
		else
			beg = mid + 1;

		mid = beg + (end - beg) / 2;//�µ��м��

	}
	//����������
	if (mid == end) //���mid��end�ĵ�ǰֵ��ȣ�˵���ұ�������Ԫ�أ�δ�ҵ�
		cout << "There are no that charator!" << endl;
	else
		cout <<  "Find " << "'" <<sought << "'" << " in this string." << endl;
	

	return 0;
}