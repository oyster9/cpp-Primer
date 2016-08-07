#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
	vector<int> ivec;
	auto it = back_inserter(ivec);//插入迭代器，向ivec中插入元素
	*it = 20; //ivec中现有元素20
	fill_n(back_inserter(ivec), 10, 1);//添加10个1到ivec中
	for( auto it = ivec.begin(); it != ivec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	////拷贝算法
	//int a1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//int a2[sizeof(a1)/sizeof(*a1)];
	////ret指向拷贝到a2的尾元素之后的位置
	//auto ret = copy(begin(a1), end(a1), a2);//把a1的内容拷贝到a2
	////显示
	//for( auto it = begin(a2); it != begin(a2)+10; ++it )//end(a2)
	//	cout << *it << " ";
	//cout << endl;
	//replace算法
	replace(ivec.begin(), ivec.end(), 1, 10);//将ivec中的1 替换为10
	for( auto it = ivec.begin(); it != ivec.end(); ++it )
		cout << *it << " ";
	cout << endl;
	return 0;
}