#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	//����ĸ��ʾ�ɼ�
	//�ȶ���һ����������ĸ�ɼ����п��ܵ�ȡֵ
	const string scores[] = {"F", "D", "C", "B", "A", "A++"};
	string letterGrade;
	//����ɼ�
	int grade;
	cin >> grade;
	//�ж�
	//����ɼ�С��60����Ӧ����ĸ��F������������±�
	if (grade < 60)
		letterGrade = scores[0];
	else
	{
		letterGrade = scores[ (grade-50)/10 ]; //�����ĸ��ʽ�ĳɼ�
		//�ںϸ�ĳɼ�����ӱ�־������ɼ���ĩλ��8��9�����+
		//���ĩλ��0,1��2�����-
		if( grade != 100 )
			if ( grade % 10 > 7 ) 
				letterGrade += '+'; //ĩλ��8��9�ĳɼ����+
			else if ( grade % 10 < 3 )
				letterGrade += '-';//ĩλ��0,1��2�ĳɼ����-
				
	}		
	cout << "ת������ĸ�ɼ�Ϊ��"  << letterGrade << endl;

	return 0;
}