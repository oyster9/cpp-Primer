#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word, preword;
	while( cin >> word ) //读取单词
	{
		if( word == preword  )
			break;	//如果两个单词相同则跳出while循环
		else
			preword = word;
	}
	//如果读完了所有的单词说明没有任何单词是连续重复出现的
	if( cin.eof() )
		cout << "No words are repeated" << endl;
	//否则输出连续重复的单词
	else 
		cout << "The repeat word is '" << word  << "'"<< endl;

	return 0;
}