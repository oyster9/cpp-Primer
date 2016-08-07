#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int ia[] = { 1, 2, 3, 4, 5, 6, 8 };
	int val = 5;
	int* result = find(begin(ia), end(ia), val);
	cout << *result << endl;

	return 0;
}