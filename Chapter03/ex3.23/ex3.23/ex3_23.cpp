#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//创建一个含有10个整数的vector对象
	//然后用迭代器将所有元素变成原来的两倍
	vector<int> iv;//空vector对象(没有限制只能有10个元素，是动态添加元素的)
	//向其中添加10个整数
	cout << "Please input ten int numbers:" << "\n";
	int a;
	while (cin >> a)
	{
		iv.push_back(a);
	}
		
	//显示输入的数
	cout << "显示输入的数:" << endl;
	for ( auto it = iv.begin(); it != iv.end(); ++it)
	{
		cout << *it << " ";
	}
	//显示原来元素的2倍
	cout << endl;
	cout << "显示原来元素的2倍:" << endl;
	for ( auto it = iv.begin(); it != iv.end(); ++it)
	{
		cout << (*it) * 2 << " ";
	}
		
	return 0;
}