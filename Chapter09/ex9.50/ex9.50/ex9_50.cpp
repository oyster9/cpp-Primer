#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> svec;
	int sum_int = 0;
	float sum_float = 0.0;
	for( int i = 0; i != 10; ++i )
		svec.push_back("2");

	for( auto it = svec.begin(); it != svec.end(); ++it )
	{
		sum_int += stoi(*it);
		sum_float += stof(*it);
	}	
	cout << "sum_int: " << sum_int << "\n"
		 << "sum_float: " << sum_float << endl;

	return 0;

}