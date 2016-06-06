//====================================================
// 描述：用while语句求1到10这个数的和
//====================================================
#include<iostream>
int main()
{
	int sum = 0, val = 1;
	//if val <= 10, then while continue
	while(val <= 10)
	{
		sum += val;	//sum = sum + val
		++val;	//val = val + 1
	}

	std::cout << "Sum of 1 to 10 inclusive is "
		      << sum << std::endl;
	return 0;
}