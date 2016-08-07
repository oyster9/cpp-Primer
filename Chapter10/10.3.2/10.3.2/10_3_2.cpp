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

//����ڵ���һ���������ȵĵ����������������������ĵ��ʴ�ӡ����
void biggies(vector<string> &words, vector<string>::size_type sz)
{
	//�����ʰ��ֵ������У���ɾ���ظ�����
	elimDups(words);
	//���������У�������ͬ�ĵ���ά���ֵ���
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size();} );
	//��ȡһ����������ָ���һ������size����>= sz ��Ԫ��
	auto wc = find_if(words.begin(), words.end(), [sz](const string &s) { return s.size() >= sz;} );
	//����size>=sz��Ԫ����Ŀ
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
		 << " of length " << sz << " or longer" << endl;

	//��ӡ���ȴ��ڵ��ڸ���ֵ�ĵ��ʣ�ÿ�����ʺ����һ���ո�
	for_each(wc, words.end(), [](const string &s){ cout << s << " ";} );
	cout << endl;

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

	//����biggies����ӡ���ڵ���n���ַ��ĵ���
	biggies(svec, 4);

	/////////////////////////////////////////////////
	size_t v1 = 42;
	auto f = [v1]()mutable { return ++v1; };
	v1 = 0;
	auto  j = f();
	cout << j << endl;

	return 0;

}