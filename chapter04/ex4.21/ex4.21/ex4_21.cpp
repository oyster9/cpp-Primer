//--------------------------------------------------------------------------------
//描述：使用条件运算符从vector<int>中找到哪些元素的值是奇数，然后将这些奇数值翻倍
//--------------------------------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>  iv;
	//向空vector对象添加元素
	int i;
	while( cin >> i)
	{
		iv.push_back(i);
	}
	//读取vector中的元素
	for (auto it = iv.begin(); it != iv.end(); ++it)
		cout << ( ( (*it) & 0x01 ) ? (*it) * 2 : *it ) << "  ";//判断是否为奇数，是的话  值*2
	cout << endl;

	return 0;
}