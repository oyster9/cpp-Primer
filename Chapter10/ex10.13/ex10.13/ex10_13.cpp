#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
//string���д��ڵ���5���ַ�ʱ����true
bool more_5(const string &str)
{
	return str.size() > 5;
}

int main()
{
	vector<string> svec;
	string s;
	while( cin >> s ) {
		svec.push_back(s);
	}

	//����partition�㷨��ָ�����ȴ���5��Ԫ�أ����Դ�Ϊ����
//	auto pos = partition(svec.begin(), svec.end(), more_5);//���ص�������ָ�����һ��ʹν��Ϊtrue��Ԫ��֮���λ��
	auto pos = partition(svec.begin(), svec.end(), [](const string &str){ return str.size() > 5;} );
	for( auto it = svec.begin(); it != pos; ++it )
		cout << *it << " ";
	cout << endl;

	//auto f = [] { return 42; };
	//cout << f() << endl;

	return 0;
}