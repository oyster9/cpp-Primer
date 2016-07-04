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
	//���캯��
	Person() {}
	Person(const string& sname, const string& saddr) : name(sname), address(saddr) {}
	Person(istream& is) { read(is, *this); }

	//��Ϊʵ�ֲ��ֵĺ���
	string get_name() const { return name; }
	string get_addr() const { return address; }

	
private:
	string name;
	string address;
	
};

//��Ӷ�ȡ�ʹ�ӡPerson����Ĳ���
istream &read( istream &is, Person &person )
{
	return is >> person.name >> person.address;
}

ostream &print( ostream &os,const Person &person )
{
	return os << person.name << person.address;
}

#endif