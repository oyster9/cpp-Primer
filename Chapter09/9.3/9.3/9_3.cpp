#include<iostream>
#include<list>
#include<string>
#include<vector>

using namespace std;

int main()
{
	//list, forward_list, deque������֧��push_front
	//��Ԫ�ز��뵽����ͷ��
	list<int> ilist;
	for( int i = 0; i < 4; i++ )
	{
		ilist.push_front(i);
	}
	cout << "ilist.front " << ilist.front() << " ilist.back " << ilist.back() << endl;
	for( auto it = ilist.begin(); it != ilist.end(); ++it )
		cout << *it << " ";

	//�������е��ض�λ�����Ԫ��
	//insert����
	vector<string> svec; 
	list<string> slist;

	//��slist�Ŀ�ʼλ�ò���Ԫ��
	slist.insert(slist.begin(), "hello");//�ȼ���slist.push_front("hello")
	//vector��֧��push_front������ʹ��insert���Բ��뵽begin����֮ǰ
	//ע�⣺���뵽vectorĩλ֮����κ�λ�ö����ܺ���
	svec.insert(svec.begin(), "hello");

	//����ָ����Χ��Ԫ��
	svec.insert(svec.end(), 10, "Anna");//��10��Ԫ�ز��뵽svec��ĩβ��ȫ����ʼ��Ϊstring��Anna��

}