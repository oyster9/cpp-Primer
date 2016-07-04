#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<string>
using namespace std;

class Screen{

public:
	//自定义一个string类型在类中的别名（pos）
	typedef  string::size_type pos;
	//构造函数
	Screen() {}
	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

	//成员函数
	char get() const { return contents[cursor]; }//获得当前光标位置的字符
	char get(pos r, pos c) const { return contents[r*width + c]; }//获得指定位置的字符

	Screen& move(pos r, pos c);
	Screen& set(char c);
	Screen& set(pos r, pos c, char ch);

	//根据对象是否是const重载了display函数
	Screen &display(ostream &os) { do_display(os); return *this; }
	const Screen &display(ostream &os) const { do_display(os); return *this; }

private:
	//该函数负责显示Screen的内容
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