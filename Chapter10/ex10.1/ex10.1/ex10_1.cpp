#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<list>

using namespace std;

int main()
{
	//vector<int> ivec;
	////����int���д���vector��
	//for(int i; cin >> i && i!=999; ivec.push_back(i));
	//cout << ivec.size() << endl;
	////����Ҫ������ִ�������
	//int ival = 0;
	//cout << "input a num: ";
	//cin >> ival;

	////����count���������ظ���ֵ�������г��ֵĴ���
	//cout << ival << "���ֵĴ���Ϊ" << count(begin(ivec), end(ivec), ival) << endl;

	list<string> ls;
	//����string���д���list��
	for(string str; cin >> str && str!="over"; ls.push_back(str));
	
	//����Ҫ������ִ�����string
	string s;
	cout << "input a string: ";
	cin >> s;

	//����count���������ظ���ֵ�������г��ֵĴ���
	cout << s << "���ֵĴ���Ϊ" << count(begin(ls), end(ls), s) << endl;
	
	return 0;
}