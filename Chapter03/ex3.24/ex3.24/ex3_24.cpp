//-----------------------------------------------------------------------
//����������һ�������������Ƕ���һ��vector���󣬽�ÿ�����������ĺ����
//      ���޸ĳ���Ҫ���������һ�������һ��Ԫ�صĺͣ����������2����
//      ������2���ĺͣ��Դ����ơ�
//-----------------------------------------------------------------------

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	//����һ����������vector������
	for (int buffer; cin >> buffer; v.push_back(buffer));
	////ʹ�õ��������vector�е�Ԫ��
	//for (auto it = v.begin(); it != v.end(); ++it)
	//	cout << *it << " ";
	//cout << endl;

	//��ÿ�����������ĺ����
	if (v.size() < 2)
	{	
		cout << "Please input at least two numbers!";
		return -1;
	}

	for (auto it2 = v.begin(); it2 + 1 != v.end(); ++it2)
		cout << *it2 + *(it2 + 1) << " ";//�����������
	cout << endl;

	//�������һ�������һ��Ԫ�صĺͣ����������2����
    //������2���ĺͣ��Դ����ơ�
	auto lt = v.begin();
	auto rt = v.end() - 1;
    while (lt <= rt)
	{
		cout << *lt + *rt << " ";
		 ++lt;
		 --rt;
	}
	cout << endl;

	return 0;
}