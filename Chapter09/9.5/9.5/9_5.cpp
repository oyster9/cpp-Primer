#include<iostream>
#include<string>

using namespace std;

int main()
{
	//����
	const char *cp = "Hello World";
	string s1(cp); //����cp�е��ַ�ֱ���������ַ�
	cout << "s1: " << s1 << endl;

	//substr����
	string s("hello world");
	string s2 = s.substr(0,5);//�ӵ�0����ʼ��5���ַ��Ŀ�����s2=hello
	string s3 = s.substr(2);//��s�ĵ�2����ʼ������Ԫ�� s3 = llo world
	cout << s3 << endl;

	//
	string s4 = "Some string", s5 = "Some other string";
	s4.insert(0, s5);	//��s4��λ��0֮ǰ����s2�Ŀ���
	cout << "s4: " << s4 << endl;

	//string ��������
	string name("AnnaBelle");
	auto pos1 = name.find("na"); //pos1 == 2
	cout << "pos1: " << pos1 << endl;

	return 0;
}