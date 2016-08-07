#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<fstream>

using namespace std;

//���ctr��ֵ����1������word�ĸ�����ʽ
string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? (word + ending) : word;
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
	ifstream ifile("E:\\Programing\\cpp\\cpp-Primer\\Chapter10\\10.2.3.txt");
	if( !ifile )
	{
		cout << "Read file fail!" << endl;
		return false;
	}
	//��������
	vector<string> svec;
	string s;
	while( ifile.good() )//һֱ�����ļ�β
	{
		ifile >> s;
		svec.push_back( s );
	}
	//��ʾԭ��
	for( auto it = svec.begin(); it != svec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//�����ʰ��ֵ������У���ɾ���ظ�����
	elimDups(svec);
	//���������У�������ͬ�ĵ���ά���ֵ���
	stable_sort(svec.begin(), svec.end(), [](const string &a, const string &b) { return a.size() < b.size();} );
	//��ʾ������
	for( auto it = svec.begin(); it != svec.end(); ++it )
		cout << *it << " ";
	cout << endl;

	//���㵥�ʳ��ȳ���5�ĵ��ʸ���
	int Cnt = count_if(svec.begin(), svec.end(), [](const string &s){ return s.size() > 5; });
	cout << Cnt << endl;

	

	return 0;

}