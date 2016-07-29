//分别使用at、下标运算符、front、begin
//提取一个vector中的第一个元素
//用一个空vector再做测试

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> ivec;
	for( int i = 1; i < 5; i++ )
	{
		ivec.push_back(i);
	}
	//提取第一个元素
	cout << ivec.at(0) << "\n"
		 << ivec[0] << "\n"
		 << ivec.front() << "\n"
		 << *ivec.cbegin() << endl;   
	return 0;
}