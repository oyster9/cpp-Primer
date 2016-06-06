//====================================================
// 描述：用while语句求1到10这个数的和
//====================================================
#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	int val = 1;

	while(val <= 10)
	{
		sum += val;
		++val;
	}
	cout << "The sum of 1 to 10 inlcusive is: "
		 << sum << endl;
	
	return 0;
}