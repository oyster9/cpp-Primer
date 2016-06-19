#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	//-----------------------3.3.1定义和初始化vector对象------------------------------------
	//vector<string> svec;
	//vector<string> svec2(svec);//把svec的元素拷贝给svec2，两个vector对象的类型必须相同
	//创建指定数量的元素
	//vector<int> ivec(10, -1);//10个int类型的元素，每个都被初始化为-1
	//for( decltype(ivec.size()) i = 0; i != 10; ++i)
	//	cout << ivec[i] << " ";
	//cout << endl;

	//vector<int> iv(10); //iv有10个元素，每个的值被初始化为0
	//vector<string> svec(10, "null");//10个string类型的元素，每个都被初始化为“null”
	//for( decltype(svec.size()) i = 0; i != 10; ++i)
	//	cout << svec[i] << " ";
	//cout << endl;

	//向vector对象中添加元素
	//先创建一个空vector，然后在运行时再利用vector的成员函数push_back
	//向其中添加元素
	/*vector<int> iv;
	for( int i = 0; i != 100; ++i)
		iv.push_back(i);*/
	//循环结束后iv有100个元素，值从0到99


	//计算vector内对象的索引
	//以10分为一个分数段统计成绩的数量
	vector<unsigned> scores(11, 0); //11个分数段，全部初始化为0
	unsigned grade;
	while( cin >> grade ) //读取成绩
	{
		if( grade <= 100 )
			++scores[grade/10];
	}



	return 0;
}