#pragma once
#include <iostream>
using namespace std;
class Date
{
	//friend  void operator<<(ostream& o, const Date& d);//����void��Ϊcout<<d1  <<d2���������������
	friend  ostream& operator<<(ostream& o, const Date& d);//����ostreamҲ����cout
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
	Date operator++();//ǰ��++
	Date operator++(int);//����++�������˲�����ռλ�����ɺ�������
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