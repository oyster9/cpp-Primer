//==============================================================
//描述： 对不确定个数的数求和，需要不断读取数据直至没有新的输入
//==============================================================
#include<iostream>

int main()
{
	int sum = 0, value = 0;
	//读取数据直到遇到文件尾，计算所有读入的值的和
	/*while(std::cin >> value)
		sum += value; //sum = sum + value
	*/
	//用for循环来做
	for( ; std::cin >> value; sum += value);
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}