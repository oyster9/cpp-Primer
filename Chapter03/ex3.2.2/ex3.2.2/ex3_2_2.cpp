#include<iostream>
#include<string>
using namespace std;

int main()
{
	////-------------------------------ex3.2---------------------------------------------
	////***编写一段程序从标准输入中一次读入一整行，然后修改程序使其一次读入一个词***/
	//string line;
	////while( getline(cin, line)) //使用getliine（）函数读取一整行,遇到换行符就结束读取并返回结果
	////	cout << line << "\n";
	////一次读入一个词（以空格为标准来界定是否为一个词）
	//while( cin >> line )
	//	cout << line << endl;
	
	//-----------------------------ex3.3-----------------------------------------------
	//***说明string类的输入运算符和getline函数分别是如何处理空白字符的***/
	//string对象会自动忽略开头的空白字符并从第一个真正的字符开始读起直到遇到下一处空白为止
	//getline函数会保留字符串中的空白字符，只有在遇到换行符时才结束读取操作并返回结果

	//-----------------------------ex3.4------------------------------------------------
	////编写程序读入两个字符串，比较其是否相等并输出结果，如果不想等输出较大的那个字符串
	//string s1, s2;
	//cout << "Please input  two series strings,separate by space:" << "\n";
	//cin >> s1 >> s2;
	//cout <<  "s1=："<< s1 << "  " << "s2=: " << s2 << endl;
	////比较俩字符串是否相等
	//if( s1 == s2 )
	//	cout << " s1 = s2 " << endl;
	//else
	//	cout << "The biger string is: " << (s1 > s2 ? s1 : s2) << endl;
	////比较两个字符串的长度
	//if( s1.size() == s2.size() )
	//	cout << " s1 and s2 have the same length! " << endl;
	//else if ( s1.size() > s2.size()) 
	//	cout << "The longer string is:" << s1 << endl;
	//else
	//	cout << "The longer string is:"  << s2 << endl;

	//-------------------------ex3.5------------------------------------
	/***编写一段程序从标准输入中读入多个字符串并把它们连接起来，输出连接后的大字符串***/
	//
	cout << "You can input some strings:" << "\n";
	string s, result1, result2;
	
	while (cin >> s) //读取输入流，直到遇到文件结束符为止
	{	
		result1 += s ;
		result2 += s + " ";
	}
	cout << result1 << endl;//输出连接后的最大字符
	//用空格把输入的多个字符串分隔开来
	cout << result2 << endl;

	return 0;

}