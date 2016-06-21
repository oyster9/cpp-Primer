#include<iostream>

using namespace std;

int main()
{
	//----------统计5个元音字母在文本中出现的次数-------------------
	//为每个元音字母初始化其计数值
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while ( cin >> ch )
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
		}
	}//while结束

	//输出结果
	cout << "Number of vowel a/A: \t" << aCnt << "\n"
		 << "Number of vowel e/E: \t" << eCnt << "\n"
		 << "Number of vowel i/I: \t" << iCnt << "\n"
		 << "Number of vowel o/O: \t" << oCnt << "\n"
		 << "Number of vowel u/U: \t" << uCnt << endl;

	

	return 0;
}