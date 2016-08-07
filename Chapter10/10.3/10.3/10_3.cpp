#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

//�Ƚϳ���
bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

//���ֵ������򣬲������ظ�����
void elimDups(vector<string> &words)
{
	//����(���ֵ�������)
	sort( words.begin(), words.end() );
	//for(auto it = words.begin(); it != words.end(); ++it)
	//	cout << *it << " ";
	//cout << endl;
	//ʹ��unique��������˳��ʹÿ������ֻ����һ��
	//����һ��ָ���ظ�ֵ��Χĩβ�ĵ�����
	auto end_unique = unique( words.begin(), words.end() );
	//for(auto it = words.begin(); it != words.end(); ++it)
	//	cout << *it << " ";
	//cout << endl;
	//ʹ����������eraseɾ���ظ�����
	words.erase(end_unique, words.end());
	//for(auto it = words.begin(); it != words.end(); ++it)
	//	cout << *it << " ";
	//cout << endl;
}
int main()
{
	//��ȡָ��Ŀ¼���ļ�
	ifstream ifs("E:\\Programing\\cpp\\cpp-Primer\\Chapter10\\10.2.3.txt");
	if( !ifs )
	{
		cout << "read file fail!" << endl;
		return false;
	}
	//����vector��
	vector<string> words;
	string s2;
	while( ifs >> s2 )
	{	//cout << s2 << " ";
		words.push_back(s2);
	}

	//��words���ֵ������ţ��������ظ�����
	elimDups(words);
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;
	//�������������򣬳�����ͬ�ĵ���ά���ֵ���
	stable_sort(words.begin(), words.end(), isShorter);//����stable_sort�����ֵȳ�Ԫ�ؼ���ֵ���
	for(auto it = words.begin(); it != words.end(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
