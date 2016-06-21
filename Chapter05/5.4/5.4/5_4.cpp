#include<iostream>
#include<string>

using namespace std;

int main()
{
	//----do while 语句---------
	////do while 语句先执行循环体后检查条件
	////不断提示用户输入一对数，然后求和
	//string rsp;//循环条件
	//do {
	//	cout << "Please enter two values: ";
	//	int val1 = 0, val2 = 0;
	//	cin >> val1 >> val2;
	//	cout << "The sum of " << val1 << " and " << val2
	//		 << " = " << val1 + val2 << "\n\n"
	//		 << "More? Enter yes or no: ";

	//	cin >> rsp;
	//}while( !rsp.empty() && rsp[0] != 'n'); //如果用户没有回答或者用户的回答以n开始，循环结束

	//---------------ex5.18-------------------------
	do {
		int v1, v2;
		cout << "Please enter two numbers to sum:";
		if (cin >> v1 >> v2)
			cout << v1 + v2 << endl;
	}while(cin);

	return 0;
}