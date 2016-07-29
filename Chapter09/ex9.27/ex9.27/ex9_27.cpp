#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
	forward_list<int> flst;
	for( int i = 0; i != 10; ++i )
		flst.push_front(i);
	//输出forward_list中的元素
	cout << "forward_list:" << endl;
	for( auto it = flst.begin(); it != flst.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//删除其中的奇数
	auto prev = flst.before_begin(); //首前迭代器
	auto curr = flst.begin(); //指向flst的第一个元素
	while ( curr != flst.end() ) {  //
		if( *curr % 2 ) //如果为奇数
			curr = flst.erase_after(prev);	//删除并移动curr，flst.erase_after返回指向被删除元素之后元素的迭代器
		else { //移动迭代器curr， prev指向curr之前的元素
			prev = curr;
			++curr;
		}
	}
	//输出删除奇数后的flst
	cout << "删除奇数后的forward_list:" << endl;
	for( auto it = flst.begin(); it != flst.end(); ++it )
		cout << *it << " ";
	cout << endl;

	return 0;
}