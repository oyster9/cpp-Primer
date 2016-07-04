#include<iostream>
using namespace std;

int main()
{
	//int ival;
	////cin >> ival;

	//auto old_state = cin.rdstate();		//记住cin的当前状态
	//cin.clear();		//对流进行复位，使cin有效
	////process_input(cin);
	//cin >> ival;
	//cin.setstate(old_state);	//将cin置为原有状态

	//8.1.3 管理缓冲区

	//刷新输出缓冲区
	//cout << "hello" << endl;	//输出hello和一个换行，然后刷新缓冲区
	//cout << "hello" << ends;	//输出hello和一个空字符，然后刷新缓冲区
	//cout << "hello" << flush;	//输出hello，然后刷新缓冲区，没有额外的输出字符

	//
	cout << unitbuf;
	cout << "hello" << ends;	
	cout << "hello" << flush;
	return 0;
}
