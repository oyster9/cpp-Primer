#include<iostream>
 using namespace std;

 //�׳˺���
 int fact( int val )
 {
	return val > 1 ? val * fact(val - 1) :1;
 }


 //���û������ĺ���
 void interative_func()
 {
	cout << "Please input a integer:";
	int i;
	cin >> i;
	cout << "The result of the " << i << "! is: " << fact(i) << endl;
 }

 int main()
 {
	interative_func();
	return 0;
 }