#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word, preword;
	while( cin >> word ) //��ȡ����
	{
		if( word == preword  )
			break;	//�������������ͬ������whileѭ��
		else
			preword = word;
	}
	//������������еĵ���˵��û���κε����������ظ����ֵ�
	if( cin.eof() )
		cout << "No words are repeated" << endl;
	//������������ظ��ĵ���
	else 
		cout << "The repeat word is '" << word  << "'"<< endl;

	return 0;
}