#include<iostream>
using namespace std;

int main()
{
	//ʹ��if���ͳ�ƴ�cin������ı����ж���Ԫ����ĸ
	unsigned vowelCnt = 0, otherCnt = 0;
	char ch;
	while (cin >> ch)
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			++vowelCnt;
		else
			++otherCnt;
	}
	cout << "���ֵ�Ԫ��������" << vowelCnt  << '\n'
		 << "���ֵķ�Ԫ��������" << otherCnt << endl;
 
	return 0;
}