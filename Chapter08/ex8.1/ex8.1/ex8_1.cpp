#include<iostream>
#include<string>

using namespace std;

istream& Input( istream &is )
{
	string str;
	while( is >> str )
		//cout << str << " " << is.rdstate() << endl;
		cout << str  << endl;

	is.clear(); //对流进行复位，，使其处于有效位置

	return is;
}

int main()
{
	istream& is = Input (cin);

	cout << is.rdstate() << endl; // 返回流的当前状态
	
}