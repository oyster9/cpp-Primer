#include<iostream>
#include<string>
using namespace std;

int main()
{
	//-----------3.2.1 ����ͳ�ʼ��string����--------------------------------
/*	string s1;	//Ĭ�ϳ�ʼ����s1��һ�����ַ���
	string s2 = s1;	//s2��s1�ĸ���
	string s3 = "hello"; //s3�Ǹ��ַ�������ֵ�ĸ���
	string s4(4, 'a'); //s4 ������Ϊ aaaa
	cout << s1 << "\n"
		 << s2 << "\n"
		 << s3 << "\n"
		 << s4 << endl;

	//ֱ�ӳ�ʼ���뿽����ʼ��
	string s5 = "hello";//������ʼ��
	string s6("hello");//ֱ�ӳ�ʼ��
	cout << "s5:" << s5 << "   " << "s6:" << s6 << endl;
*/

	//--------------3.2.2 string�����ϵĲ���---------------------------------
	//��дstring����
	//string s; //����һ�����ַ���
	//cin >> s; //��string�������s�������հ�ֹͣ
	//cout << s << endl; //�������� �����Ӧ������

	//��ȡδ֪������string����
	//string word;
	//while( cin >> word ) //�����������������ļ�������Ƿ����߷Ƿ�����ѭ������
	//	cout << word << endl; //���������ʣ�ÿ��������һ������


	//ʹ��getline��ȡһ����
/*	string line;
	//ÿ�ζ���һ���У�ֱ�������ļ�β
	while( getline(cin, line) )
	{
		//if( !line.empty() )//(�Ӿ仰����empty����ʹ����������ֱ������)
		//{
		//		cout << line << endl;
		//}

		if(line.size() > 5) //�������5���ַ�����
			cout << line << endl;
	
	}
*/	
	//�Ƚ�string����
	//�����ֵ�˳��(�Դ�Сд����)
	//string str = "hello";
	//string phrase = "hello world";
	//string slang = "hi";
	//cout << (str > phrase ? str : phrase) << endl; //���str��phrase�д���Ǹ�������strС�ڶ���phrase�� �����hello world��
	//cout << (phrase > slang ? phrase : slang) << endl; //����phraseС�ڶ���slang �����hi��
		
	//����string�������
	//string s1 =  "hello,", s2 = "world!";
	//string s3 = s1 + s2;//���hello��world��
	//s1 += s2; //s1 = s1 + s2,  s1���ڱ�Ϊhello��world��
	//cout << "s3 = s1 + s2 :" << s3 << "\n"
	//	 << "s1 += s2 :" << s1 << endl;

	//����ֵ��string�������
	//����string������ַ�����ֵ���ַ�������ֵ����һ�������ʹ��ʱ
	//����ȷ��ÿ���ӷ��������+����������������������һ����string
	//string s1 = "hello", s2 = "world";
	//string s3 = s1 + "," + s2 + '\n';//��ȷ�����hello��world
	//cout << s3 << endl;
	////string s4 = "hello" + " world ";//����+�����ߵ�������󶼲���string
	//string s5 = s1 + ", " + "world";//��ȷ��s1 + ���� ���Ľ����һ��string����
	////string s6 = "hello" + ", " +s2;//���󣺡�hello�� + ������ �Ӻ����߶�������ֵ�����ܽ�����ֱֵ�����

	//����string�����е��ַ�
/*	//���ڷ�Χ��for���2010��֧��
	//ֻ����һ�����ַ�
	string s("some string");
	if( !s.empty() ) //	s�ǿգ�ȷ��s[0]��λ�����ַ�
		s[0] = toupper(s[0]); //��һ���ַ���Ϊ��д
	cout << s << endl;

	//ʹ���±�ִ�е���
	//��s�ĵ�һ�����ʸĳɴ�д�����δ���s�е��ַ�ֱ��������ȫ���ַ����������հף�
	for( decltype(s.size()) i = 0; i != s.size() && !isspace(s[i]); ++i)
		s[i] = toupper(s[i]);
	cout << s << endl;
*/

	//ʹ���±�ִ���������
	//��д�����0��15֮���ʮ������ת���ɶ�Ӧ��ʮ��������ʽ
	const string hexdigits = "0123456789ABCDEF";//���ܵ�ʮ����������
	cout << "Enter a series of numbers between 0 and 15"
		 << " separated by space.Hit ENTER when finished: "
		 << endl;

	string result; //���ڱ���ʮ�����Ƶ��ַ���
	string::size_type n; //���ڱ������������ȡ������Ҳ��hexdigits���±�
	while ( cin >> n )
		if( n < hexdigits.size() ) //������Ч����
			result += hexdigits[n];//�õ���Ӧ��ʮ��������

	cout << "Your hex number is: " << result << endl;


	return 0;
}
