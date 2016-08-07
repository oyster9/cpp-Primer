#include<iostream>
#include<vector>
#include<algorithm>
//#include<iterator>

using namespace std;

int main()
{
	int a[] = {1, 3, 1, 5, 7, 4, 7, 8, 2, 6 };
	sort(begin(a), end(a) );//��������������
	for( auto it = begin(a); it != end(a); ++it )
		cout << *it << " ";
	cout << endl;

	//ʹ�÷��������
	vector<int> ivec;
	for( auto it = begin(a); it != end(a); ++it )
		ivec.push_back(*it);
	sort(ivec.rbegin(), ivec.rend() );//����������
	for( auto it = ivec.begin(); it != ivec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	for (auto it = prev(ivec.cend()); true; --it)
	{
		cout << *it << " ";
		if (it == ivec.cbegin()) break;
	}
	cout << endl;

	return 0;

}