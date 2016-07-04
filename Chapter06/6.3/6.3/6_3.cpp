#include<iostream>
using namespace std;

void swap(int &v1, int &v2)
{
	if (v1 == v2)
		return; //值相等则直接退出
	int tmp;
	tmp = v1;
	v1 = v2;
	v2 = tmp;
	cout << v1 << " " << v2 << endl;
}

auto func(int i) -> int(*) [10];//使用尾置返回类型，func返回的是一个指针，该指针指向含有10个整数的数组

int main()
{
	int i, j;
	cin >> i >> j;
	swap(i,j);
	return 0;
}