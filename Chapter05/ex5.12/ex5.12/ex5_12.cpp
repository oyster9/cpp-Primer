#include<iostream>

using namespace std;

int main()
{
	//为每个元音字母初始化其计数值
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//为空格，制表符和换行符初始化其计数值
	unsigned spaceCnt = 0, tabCnt = 0, changeLineCnt = 0;
	//统计含有ff， fi， fl序列的数量，先初始化
	unsigned ffCnt = 0, fiCnt = 0, flCnt = 0;
	char ch, prech = '\0';
	while ( cin >> std::noskipws >> ch ) //std::noskipws操作符用来设置不忽略空白字符，这样就可以读取'\n'等空白字符
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
				if ( prech == 'f') ++fiCnt; //注意这里没有break，因为i、I数量都要算入iCnt中
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
	}//while结束

	//输出结果
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