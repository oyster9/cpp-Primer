#include<iostream>

using namespace std;

int main()
{
	//Ϊÿ��Ԫ����ĸ��ʼ�������ֵ
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//Ϊ�ո��Ʊ���ͻ��з���ʼ�������ֵ
	unsigned spaceCnt = 0, tabCnt = 0, changeLineCnt = 0;
	//ͳ�ƺ���ff�� fi�� fl���е��������ȳ�ʼ��
	unsigned ffCnt = 0, fiCnt = 0, flCnt = 0;
	char ch, prech = '\0';
	while ( cin >> std::noskipws >> ch ) //std::noskipws�������������ò����Կհ��ַ��������Ϳ��Զ�ȡ'\n'�ȿհ��ַ�
	{
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
				if ( prech == 'f') ++fiCnt; //ע������û��break����Ϊi��I������Ҫ����iCnt��
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
			case 'l':
				if (prech == 'f') ++flCnt;
				break;
			case 'f':
				if (prech == 'f') ++ffCnt;
				break;
		}

		prech = ch;
	}//while����

	//������
	cout << "Number of vowel a/A: \t" << aCnt << "\n"
		 << "Number of vowel e/E: \t" << eCnt << "\n"
		 << "Number of vowel i/I: \t" << iCnt << "\n"
		 << "Number of vowel o/O: \t" << oCnt << "\n"
		 << "Number of vowel u/U: \t" << uCnt << "\n"
	     << "Number of vowel space: \t" << spaceCnt << "\n"
		 << "Number of vowel tab: \t" << tabCnt << "\n"
		 << "Number of vowel enter: \t" << changeLineCnt << '\n'
		 << "Number of vowel ff: \t" << ffCnt << "\n"
		 << "Number of vowel fi: \t" << fiCnt << "\n"
		 << "Number of vowel fl: \t" << flCnt << endl;

	

	return 0;
}