#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	//��ȡָ��Ŀ¼���ļ�
	ifstream ifs("E:\\Programing\\cpp\\cpp-Primer\\Chapter10\\10.2.3.txt");
	if( !ifs )
	{
		cout << "read file fail!" << endl;
		return false;
	}
	////��ʾ
	//string s;
	//while( getline(ifs, s) ) {
	//	cout << s;
	//}
	//cout << endl;

	//����vector��
	vector<string> words;
	string s2;
	while( ifs >> s2 )
	{	//cout << s2 << " ";
		words.push_back(s2);
	}
	//����(���ֵ�������)
	sort( words.begin(), words.end() );
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//ʹ��unique��������˳��ʹÿ������ֻ����һ��
	//����һ��ָ���ظ�ֵ��Χĩβ�ĵ�����
	auto end_unique = unique( words.begin(), words.end() );
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//ʹ����������eraseɾ���ظ�����
	words.erase(end_unique, words.end());
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
