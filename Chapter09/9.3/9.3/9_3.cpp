#include<iostream>
#include<list>
#include<string>
#include<vector>

using namespace std;

int main()
{
	//list, forward_list, deque容器还支持push_front
	//将元素插入到容器头部
	list<int> ilist;
	for( int i = 0; i < 4; i++ )
	{
		ilist.push_front(i);
	}
	cout << "ilist.front " << ilist.front() << " ilist.back " << ilist.back() << endl;
	for( auto it = ilist.begin(); it != ilist.end(); ++it )
		cout << *it << " ";

	//在容器中的特定位置添加元素
	//insert函数
	vector<string> svec; 
	list<string> slist;

	//在slist的开始位置插入元素
	slist.insert(slist.begin(), "hello");//等价于slist.push_front("hello")
	//vector不支持push_front，但是使用insert可以插入到begin（）之前
	//注意：插入到vector末位之外的任何位置都可能很慢
	svec.insert(svec.begin(), "hello");

	//插入指定范围内元素
	svec.insert(svec.end(), 10, "Anna");//将10个元素插入到svec的末尾，全部初始化为string“Anna”

}