#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<string>
using namespace std;

class Screen{

public:
	//�Զ���һ��string���������еı�����pos��
	typedef  string::size_type pos;
	//���캯��
	Screen() {}
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

	//��Ա����
	char get() const { return contents[cursor]; }//��õ�ǰ���λ�õ��ַ�
	char get(pos r, pos c) const { return contents[r*width + c]; }//���ָ��λ�õ��ַ�

	Screen& move(pos r, pos c);
	Screen& set(char c);
	Screen& set(pos r, pos c, char ch);

	//���ݶ����Ƿ���const������display����
	Screen &display(ostream &os) { do_display(os); return *this; }
	const Screen &display(ostream &os) const { do_display(os); return *this; }

private:
	//�ú���������ʾScreen������
	void do_display(ostream& os) const { os << contents; }
private:
	pos cursor;
	pos height, width;
	string contents;

};
Screen& Screen::move(pos r, pos c)
{
	cursor = r *width + c;
	return *this;
}

Screen& Screen::set( char c )
{
	contents[cursor] = c;
	return *this;
}

Screen& Screen::set( pos r, pos c, char ch )
{
	contents[r * width + ch] = ch;
	return *this;
}
#endif