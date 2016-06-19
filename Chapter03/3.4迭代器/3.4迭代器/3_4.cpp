#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	////使用迭代器把string对象的第一个字母改为大写
	//string s("some string");
	//if( s.begin() != s.end() ) //确保s非空
	//{
	//	auto it = s.begin();//it表示s的第一个字符
	//	*it = toupper(*it); //将当前字符改成大写形式
	//}
	////输出结果
	//for(auto it = s.begin(); it != s.end(); ++it)
	//	cout << *it;//Some string
	//cout << endl;

	////将迭代器从一个元素移动到另外一个元素
	////把上面的字符串s中的字母全部改为大写
	//for(auto it2 = s.begin(); it2 != s.end(); ++it2)
	//{
	//	*it2 = toupper(*it2);
	//	cout << *it2;
	//}

	//使用迭代器的一个经典算法--二分搜索
	//要求是有序序列
	string text=("abcdefghijklmnopqrst");//
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;//初始状态下的中间点
	//输入要查找的对象
	cout << "Please input a character:" << endl;
	char sought;
	cin >> sought;
	//进行二分搜索
	while( mid != end && *mid != sought )
	{
		if( sought < *mid )
			end = mid;
		else
			beg = mid + 1;

		mid = beg + (end - beg) / 2;//新的中间点

	}
	//输出搜索结果
	if (mid == end) //如果mid和end的当前值相等，说明找遍了所有元素，未找到
		cout << "There are no that charator!" << endl;
	else
		cout <<  "Find " << "'" <<sought << "'" << " in this string." << endl;
	

	return 0;
}