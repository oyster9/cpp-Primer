#include<iostream>
using namespace std;

int main()
{
	//使用if语句统计从cin读入的文本中有多少元音字母
	unsigned vowelCnt = 0, otherCnt = 0;
	char ch;
	while (cin >> ch)
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			++vowelCnt;
		else
			++otherCnt;
	}
	cout << "出现的元音次数：" << vowelCnt  << '\n'
		 << "出现的非元音次数：" << otherCnt << endl;
 
	return 0;
}