#include<iostream>

using namespace std;

int main()
{
	//----------------------------------------------------------------------
	//-----ʹ�������ͳ��Ԫ����ĸ��Ҳ��ͳ�ƿո��Ʊ���ͻ��з�������------
	//Ϊÿ��Ԫ����ĸ��ʼ�������ֵ
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//Ϊ�ո��Ʊ���ͻ��з���ʼ�������ֵ
	unsigned spaceCnt = 0, tabCnt = 0, changeLineCnt = 0;
	char ch;
	while ( cin >> std::noskipws >> ch ) //std::noskipws�������������ò����Կհ��ַ��������Ϳ��Զ�ȡ'\n'�ȿհ��ַ�
	{
		//���ch��Ԫ����ĸ�����Ӧ�ļ���ֵ��1
		switch (ch)
		{
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':
			case 'E':
				++eCnt;
				break;
			case 'i':
			case 'I':
				++iCnt;
				break;
			case 'o':
			case 'O':
				++oCnt;
				break;
			case 'u':
			case 'U':
				++uCnt;
				break;
			case ' ':
				++spaceCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++changeLineCnt;
				break;
		}
	}//while����

	//������
	cout << "Number of vowel a/A: \t" << aCnt << "\n"
		 << "Number of vowel e/E: \t" << eCnt << "\n"
		 << "Number of vowel i/I: \t" << iCnt << "\n"
		 << "Number of vowel o/O: \t" << oCnt << "\n"
		 << "Number of vowel u/U: \t" << uCnt << "\n"
	     << "Number of vowel space: \t" << spaceCnt << "\n"
		 << "Number of vowel tab: \t" << tabCnt << "\n"
		 << "Number of vowel enter: \t" << changeLineCnt << endl;

	

	return 0;
}