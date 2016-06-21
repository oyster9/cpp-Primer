#include<iostream>

using namespace std;

int main()
{
	//----------------------------------------------------------------------
	//-----使程序既能统计元音字母，也能统计空格、制表符和换行符的数量------
	//为每个元音字母初始化其计数值
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//为空格，制表符和换行符初始化其计数值
	unsigned spaceCnt = 0, tabCnt = 0, changeLineCnt = 0;
	char ch;
	while ( cin >> std::noskipws >> ch ) //std::noskipws操作符用来设置不忽略空白字符，这样就可以读取'\n'等空白字符
	{
		//如果ch是元音字母将其对应的计数值加1
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
	}//while结束

	//输出结果
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