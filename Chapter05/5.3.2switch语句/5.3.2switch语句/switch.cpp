#include<iostream>

using namespace std;

int main()
{
	//----------ͳ��5��Ԫ����ĸ���ı��г��ֵĴ���-------------------
	////Ϊÿ��Ԫ����ĸ��ʼ�������ֵ
	//unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//char ch;
	//while ( cin >> ch )
	//{
	//	//���ch��Ԫ����ĸ�����Ӧ�ļ���ֵ��1
	//	switch (ch)
	//	{
	//		case 'a':
	//			++aCnt;
	//			break;
	//		case 'e':
	//			++eCnt;
	//			break;
	//		case 'i':
	//			++iCnt;
	//			break;
	//		case 'o':
	//			++oCnt;
	//			break;
	//		case 'u':
	//			++uCnt;
	//			break;
	//	}
	//}//while����

	////������
	//cout << "Number of vowel a: \t" << aCnt << "\n"
	//	 << "Number of vowel e: \t" << eCnt << "\n"
	//	 << "Number of vowel i: \t" << iCnt << "\n"
	//	 << "Number of vowel o: \t" << oCnt << "\n"
	//	 << "Number of vowel u: \t" << uCnt << endl;

	//ͳ������Ԫ����ĸ���ֵ��ܴ���
	unsigned vowelCnt = 0, otherCnt = 0;
	char ch;
	while (cin >> ch)
	{
		switch(ch)
		{
			/*case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			*/
			//��һ��д��
			case 'a': case 'e': case 'i': case 'o': case 'u':
				++vowelCnt;
				break;
			default: //��Ԫ��
				++otherCnt;
				break;

		}
	}
	cout << "���ֵ�Ԫ��������" << vowelCnt  << '\n'
		 << "���ֵķ�Ԫ��������" << otherCnt << endl;

	return 0;
}