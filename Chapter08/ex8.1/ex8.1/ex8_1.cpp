#include<iostream>
#include<string>

using namespace std;

istream& Input( istream &is )
{
	string str;
	while( is >> str )
		//cout << str << " " << is.rdstate() << endl;
		cout << str  << endl;

	is.clear(); //�������и�λ����ʹ�䴦����Чλ��

	return is;
}

int main()
{
	istream& is = Input (cin);

	cout << is.rdstate() << endl; // �������ĵ�ǰ״̬
	
}