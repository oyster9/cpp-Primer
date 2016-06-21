#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	//用字母表示成绩
	//先定义一个数组存放字母成绩所有可能的取值
	const string scores[] = {"F", "D", "C", "B", "A", "A++"};
	string letterGrade;
	//输入成绩
	int grade;
	cin >> grade;
	//判断
	//如果成绩小于60，对应的字母是F，否则就算其下标
	if (grade < 60)
		letterGrade = scores[0];
	else
	{
		letterGrade = scores[ (grade-50)/10 ]; //获得字母形式的成绩
		//在合格的成绩后面加标志，如果成绩的末位是8或9，添加+
		//如果末位是0,1或2，添加-
		if( grade != 100 )
			if ( grade % 10 > 7 ) 
				letterGrade += '+'; //末位是8或9的成绩添加+
			else if ( grade % 10 < 3 )
				letterGrade += '-';//末位是0,1或2的成绩添加-
				
	}		
	cout << "转换成字母成绩为："  << letterGrade << endl;

	return 0;
}