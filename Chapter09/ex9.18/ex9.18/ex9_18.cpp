/*
 *��д���򣬴ӱ�׼�����ȡstring���У�����һ��deque��
 *��дѭ�����õ�������ӡdeque�е�Ԫ��
 */
#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main()
{
	deque<string> sd;
	for( string str; cin >> str; sd.push_back(str) );
	//�õ�������ӡdeque�е�Ԫ��
	for( auto it = sd.cbegin(); it != sd.cend(); ++it )
		cout << *it << " ";
	cout << endl;

	return 0;
}

