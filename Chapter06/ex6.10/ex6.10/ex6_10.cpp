#include<iostream>

using namespace std;

//½»»»º¯Êý
void swap( int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	cout << "Input two integers:";
	int v1, v2;
	cin >> v1 >> v2;

	swap(&v1, &v2);
	cout << v1 << "  " << v2 << endl;


	return 0;
}