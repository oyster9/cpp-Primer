#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s("ab2c3d7R4E6");
	string nums("0123456789");
	string numeric_str, alphabet_str;
	//²éÕÒÊı×Ö×Ö·û
	for( auto pos = 0; (pos = s.find_first_of(nums,pos)) != string::npos; ++pos )
		numeric_str.push_back(s[pos]);
	//²éÕÒ×ÖÄ¸×Ö·û
	for( auto pos = 0; (pos = s.find_first_not_of(nums,pos)) != string::npos; ++pos )
		alphabet_str.push_back(s[pos]);

	//ÏÔÊ¾
	cout << "numeric_str:" << "\n";	
	for( auto it = numeric_str.begin(); it != numeric_str.end(); ++it )
		cout << *it << "  ";
	cout << endl;
	cout << "alphabet_str:" << "\n";	
	for( auto it = alphabet_str.begin(); it != alphabet_str.end(); ++it )
		cout << *it << "  ";
	cout << endl;


	return 0;
}