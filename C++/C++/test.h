#pragma once
#include <iostream>
using namespace std;
class Date
{
	//friend  void operator<<(ostream& o, const Date& d);//返回void作为cout<<d1  <<d2的左操作数，不行
	friend  ostream& operator<<(ostream& o, const Date& d);//返回ostream也就是cout
public:
	Date(int year=1, int mouth=1, int day=1);
	void print();
	int getDay(int year, int mouth);
	bool operator>(const Date& d);
	bool operator==(const Date& d);
	bool operator>=(const Date& d);
	bool operator<(const Date& d);
	bool operator<=(const Date& d);
	bool operator<=(const Date& d);
	bool operator!=(const Date& d);
	bool operator-=(const Date& d);

	int operator-(const Date& d)const;
	Date operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day)const;
	Date operator++();//前置++
	Date operator++(int);//后置++，增加了参数来占位，构成函数重载
	Date& operator--();
	Date operator--(int);

	void operator<<(ostream& o);
	void get()
	{
		Date start(1900, 1, 1);
		int c= *this - start;
		cout << c % 7 << endl;
		int cc = *this - Date(2022, 12, 1);
	}
private:
	int _year;
	int _month;
	int _day;
};
ostream& operator<<(ostream& o, const Date& d);