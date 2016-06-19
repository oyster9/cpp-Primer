#include<iostream>
#include<string>
using namespace std;

int main()
{
	//-----------3.2.1 定义和初始化string对象--------------------------------
/*	string s1;	//默认初始化，s1是一个空字符串
	string s2 = s1;	//s2是s1的副本
	string s3 = "hello"; //s3是该字符串字面值的副本
	string s4(4, 'a'); //s4 的内容为 aaaa
	cout << s1 << "\n"
		 << s2 << "\n"
		 << s3 << "\n"
		 << s4 << endl;

	//直接初始化与拷贝初始化
	string s5 = "hello";//拷贝初始化
	string s6("hello");//直接初始化
	cout << "s5:" << s5 << "   " << "s6:" << s6 << endl;
*/

	//--------------3.2.2 string对象上的操作---------------------------------
	//读写string对象
	//string s; //定义一个空字符串
	//cin >> s; //将string对象读入s，遇到空白停止
	//cout << s << endl; //根据输入 输出对应的内容

	//读取未知数量的string对象
	//string word;
	//while( cin >> word ) //检测流的情况，遇到文件结束标记符或者非法输入循环结束
	//	cout << word << endl; //逐个输出单词，每个后面有一个换行


	//使用getline读取一整行
/*	string line;
	//每次读入一整行，直到到达文件尾
	while( getline(cin, line) )
	{
		//if( !line.empty() )//(加句话，用empty函数使其遇到空行直接跳过)
		//{
		//		cout << line << endl;
		//}

		if(line.size() > 5) //输出超过5个字符的行
			cout << line << endl;
	
	}
*/	
	//比较string对象
	//依照字典顺序(对大小写敏感)
	//string str = "hello";
	//string phrase = "hello world";
	//string slang = "hi";
	//cout << (str > phrase ? str : phrase) << endl; //输出str，phrase中大的那个（对象str小于对象phrase） 结果“hello world”
	//cout << (phrase > slang ? phrase : slang) << endl; //对象phrase小于对象slang 结果“hi”
		
	//两个string对象相加
	//string s1 =  "hello,", s2 = "world!";
	//string s3 = s1 + s2;//输出hello，world！
	//s1 += s2; //s1 = s1 + s2,  s1现在变为hello，world！
	//cout << "s3 = s1 + s2 :" << s3 << "\n"
	//	 << "s1 += s2 :" << s1 << endl;

	//字面值和string对象相加
	//当把string对象和字符字面值及字符串字面值混在一条语句中使用时
	//必须确保每个加法运算符（+）的两侧的运算对象至少有一个是string
	//string s1 = "hello", s2 = "world";
	//string s3 = s1 + "," + s2 + '\n';//正确：输出hello，world
	//cout << s3 << endl;
	////string s4 = "hello" + " world ";//错误：+号两边的运算对象都不是string
	//string s5 = s1 + ", " + "world";//正确：s1 + “， ”的结果是一个string对象
	////string s6 = "hello" + ", " +s2;//错误：“hello” + “，” 加号两边都是字面值，不能将字面值直接相加

	//处理string对象中的字符
/*	//基于范围的for语句2010不支持
	//只处理一部分字符
	string s("some string");
	if( !s.empty() ) //	s非空，确保s[0]的位置有字符
		s[0] = toupper(s[0]); //第一个字符变为大写
	cout << s << endl;

	//使用下标执行迭代
	//把s的第一个单词改成大写（依次处理s中的字符直至处理完全部字符或者遇到空白）
	for( decltype(s.size()) i = 0; i != s.size() && !isspace(s[i]); ++i)
		s[i] = toupper(s[i]);
	cout << s << endl;
*/

	//使用下标执行随机访问
	//编写程序把0到15之间的十进制数转换成对应的十六进制形式
	const string hexdigits = "0123456789ABCDEF";//可能的十六进制数字
	cout << "Enter a series of numbers between 0 and 15"
		 << " separated by space.Hit ENTER when finished: "
		 << endl;

	string result; //用于保存十六进制的字符串
	string::size_type n; //用于保存从输入流读取的数，也是hexdigits的下标
	while ( cin >> n )
		if( n < hexdigits.size() ) //忽略无效输入
			result += hexdigits[n];//得到对应的十六进制数

	cout << "Your hex number is: " << result << endl;


	return 0;
}
