#include<iostream>
#include<fstream>
#include<list>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	//��ȡָ��Ŀ¼���ļ�
	ifstream ifs("E:\\Programing\\cpp\\cpp-Primer\\Chapter10\\10.2.3.txt");
	if( !ifs )
	{
		cout << "read file fail!" << endl;
		return false;
	}

	list<string> lst1, lst2;
	while( ifs.good() )
	{
		string s;
		ifs >> s;
		lst1.push_back(s);
	}
	//��ʾԭ��
	for( auto it = lst1.begin(); it != lst1.end(); ++it )
		cout << *it << " ";
	cout << endl;

	return 0;
}