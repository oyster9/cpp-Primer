#include<iostream>
#include<string>

using namespace std;

int main()
{
	string rsp;//��Ϊѭ�������������ܶ�����do���ڲ�
	do {
		cout << "Please input two string: ";
		string str1, str2;
		cin >> str1 >> str2;
		//����϶̵�string
		cout << (str1.size() >= str2.size() ? str2 : str1)
			 << " is shorter!" << "\n\n"
			 << "More? Enter yes or no:";

		cin >> rsp;
	}while( !rsp.empty() && rsp[0] != 'n');

	return 0;
}