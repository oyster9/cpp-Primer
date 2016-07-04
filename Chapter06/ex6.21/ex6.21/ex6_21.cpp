#include<iostream>

using namespace std;

int is_larger(int i, const int *p)
{
	return i > *p ? i : *p;
}

int main()
{
	int v1, v2;
	cin >> v1 >> v2;
	cout << "The larger one is: " << is_larger(v1, &v2) << endl;

	return 0;
}