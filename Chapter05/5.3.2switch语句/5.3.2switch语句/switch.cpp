#include<iostream>

using namespace std;

int main()
{
	//----------统计5个元音字母在文本中出现的次数-------------------
	////为每个元音字母初始化其计数值
	//unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	//char ch;
	//while ( cin >> ch )
	//{
	//	//如果ch是元音字母将其对应的计数值加1
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
	//}//while结束

	////输出结果
	//cout << "Number of vowel a: \t" << aCnt << "\n"
	//	 << "Number of vowel e: \t" << eCnt << "\n"
	//	 << "Number of vowel i: \t" << iCnt << "\n"
	//	 << "Number of vowel o: \t" << oCnt << "\n"
	//	 << "Number of vowel u: \t" << uCnt << endl;

	//统计所有元音字母出现的总次数
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
			//另一种写法
			case 'a': case 'e': case 'i': case 'o': case 'u':
				++vowelCnt;
				break;
			default: //非元音
				++otherCnt;
				break;

		}
	}
	cout << "出现的元音次数：" << vowelCnt  << '\n'
		 << "出现的非元音次数：" << otherCnt << endl;

	return 0;
}