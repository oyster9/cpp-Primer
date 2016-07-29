#include<iostream>
#include<string>

using namespace std;

int main()
{
	//拷贝
	const char *cp = "Hello World";
	string s1(cp); //拷贝cp中的字符直到遇到空字符
	cout << "s1: " << s1 << endl;

	//substr操作
	string s("hello world");
	string s2 = s.substr(0,5);//从第0个开始的5个字符的拷贝，s2=hello
	string s3 = s.substr(2);//从s的第2个开始的所有元素 s3 = llo world
	cout << s3 << endl;

	//
	string s4 = "Some string", s5 = "Some other string";
	s4.insert(0, s5);	//在s4中位置0之前插入s2的拷贝
	cout << "s4: " << s4 << endl;

	//string 搜索操作
	string name("AnnaBelle");
	auto pos1 = name.find("na"); //pos1 == 2
	cout << "pos1: " << pos1 << endl;

	return 0;
}