#include<iostream>
#include<string>

using namespace std;

int main()
{
	//----do while ���---------
	////do while �����ִ��ѭ�����������
	////������ʾ�û�����һ������Ȼ�����
	//string rsp;//ѭ������
	//do {
	//	cout << "Please enter two values: ";
	//	int val1 = 0, val2 = 0;
	//	cin >> val1 >> val2;
	//	cout << "The sum of " << val1 << " and " << val2
	//		 << " = " << val1 + val2 << "\n\n"
	//		 << "More? Enter yes or no: ";

	//	cin >> rsp;
	//}while( !rsp.empty() && rsp[0] != 'n'); //����û�û�лش�����û��Ļش���n��ʼ��ѭ������

	//---------------ex5.18-------------------------
	do {
		int v1, v2;
		cout << "Please enter two numbers to sum:";
		if (cin >> v1 >> v2)
			cout << v1 + v2 << endl;
	}while(cin);

	return 0;
}