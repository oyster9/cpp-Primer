#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>

using namespace std;

class Person
{
	friend istream &read( istream &is, Person &person );
	friend ostream &print( ostream &os,const Person &person );

public:
	//构造函数
	Person() {}
	Person(const string& sname, const string& saddr) : name(sname), address(saddr) {}
	Person(istream& is) { read(is, *this); }

	//作为实现部分的函数
	string get_name() const { return name; }
	string get_addr() const { return address; }

	
private:
	string name;
	string address;
	
};

//添加读取和打印Person对象的操作
istream &read( istream &is, Person &person )
{
	return is >> person.name >> person.address;
}

ostream &print( ostream &os,const Person &person )
{
	return os << person.name << person.address;
}

#endif