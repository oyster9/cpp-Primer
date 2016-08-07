#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
//string中有大于等于5个字符时返回true
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

	//调用partition算法，指出长度大于5的元素，并以此为划分
//	auto pos = partition(svec.begin(), svec.end(), more_5);//返回迭代器，指向最后一个使谓词为true的元素之后的位置
	auto pos = partition(svec.begin(), svec.end(), [](const string &str){ return str.size() > 5;} );
	for( auto it = svec.begin(); it != pos; ++it )
		cout << *it << " ";
	cout << endl;

	//auto f = [] { return 42; };
	//cout << f() << endl;

	return 0;
}