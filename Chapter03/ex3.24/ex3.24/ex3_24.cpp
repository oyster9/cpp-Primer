//-----------------------------------------------------------------------
//描述：读入一组整数并把它们读入一个vector对象，将每对相邻整数的和输出
//      再修改程序，要求先输出第一个和最后一个元素的和，接着输出第2个和
//      倒数第2个的和，以此类推。
//-----------------------------------------------------------------------

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	//输入一组数并读到vector对象中
	for (int buffer; cin >> buffer; v.push_back(buffer));
	////使用迭代器输出vector中的元素
	//for (auto it = v.begin(); it != v.end(); ++it)
	//	cout << *it << " ";
	//cout << endl;

	//将每对相邻整数的和输出
	if (v.size() < 2)
	{	
		cout << "Please input at least two numbers!";
		return -1;
	}

	for (auto it2 = v.begin(); it2 + 1 != v.end(); ++it2)
		cout << *it2 + *(it2 + 1) << " ";//相邻整数相加
	cout << endl;

	//先输出第一个和最后一个元素的和，接着输出第2个和
    //倒数第2个的和，以此类推。
	auto lt = v.begin();
	auto rt = v.end() - 1;
    while (lt <= rt)
	{
		cout << *lt + *rt << " ";
		 ++lt;
		 --rt;
	}
	cout << endl;

	return 0;
}