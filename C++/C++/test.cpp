
#include "test.h"
//class date
//{
//public:
//	void init(int year,int month)
//	{
//		_year = year;
//		_month = month;
//	}
//	void print()
//	{
//		cout << _year << endl;
//		cout << _month << endl;
//	}
//	/*date()
//	{
//		_year = 0;
//		_month =3;
//	}*/
//	date(int year=1)
//	{
//		_year = year;
//	}
//	/*date(const date& d)
//	{
//		_year = d._year;
//	}*/
//	date operator=(const date& d)//节省空间，避免改变实参
//	{
//		/*if (_year > d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month > d._month)
//		{
//			return false;
//		}*/
//		_year = d._year;
//		_month = d._month;
//	}
//private:
//	int _year;
//	int _month;
//	
//};


//class Date
//{
//public:
//	Date(int year, int mouth, int day);
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
Date::Date(int year, int mouth, int day)
{
	_year = year;
	_month = mouth;
	_day = day;
	if (_year >= 0 && (mouth > 0 && mouth < 13) && (day > 0 && day <= getDay(year,mouth)))
	{

	}
	else
	{
		cout << "非法"; print();
	}
}
Date Date:: operator+=(int day)
{
	if (day < 0)
	{
		return *this -= -day;
	}
	_day += day;
	while (_day > getDay(_year, _day))
	{
		_day -= getDay(_year, _month);
		++_month;
	}
	if (_month == 13)
	{
		_month = 1;
		_year++;
	}
	return *this;
}
//d1+100
Date Date::operator+(int day)//不用引用
{
	Date ret(*this);//拷贝构造一个ret，*this是d1
	//ret._day += day;
	//ret.operator+=(day); 
	ret += day;
	return ret;
}
void Date::print()
{
	cout << _year << " " << _month << " " << _day << endl;
}

int Date::getDay(int month, int year)
{
	static int DayArr[13]= { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = DayArr[month];
	if(month == 2&&((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		day += 1;
	}
	return day;
}
Date Date::operator++()//自定义类型最好前置++
{
	*this += 1;
	return*this;
}
Date Date:: operator++(int)
{
	Date ret(*this);//拷贝构造
	*this += 1;
	return ret;//传值返回，拷贝构造
}
//d1==d2
bool Date::operator==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}
bool Date::operator>=(const Date& d)
{
	return *this > d || *this == d;
}
bool Date::operator<(const Date& d)
{
	return !(*this >= d);
}
bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}
bool Date::operator!=(const Date& d)
{
	return !(*this == d);
}

// d1 -= 10
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		//return *this +=-day;//                                
	}

	_day -= day;
	while (_day <= 0)                   
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}

		_day += getDay(_year, _month);
	}

	return *this;
}
Date Date::operator-(int day)const
{
	Date ret(*this);
	ret -= day;
	return ret;
}
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
Date Date::operator--(int)
{
	Date ret(*this);
	*this -= 1;
	return ret;
}
int Date::operator-(const Date& d)const
{
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;//第一个小，第二个大
	}
	int cout = 0;
	while (min != max)
	{
		++min;
		++cout;

	}
	return cout * flag;
}
class A
{
public :
	A* operator&()
	{
		return this;
	}
	const A* operator&()const
	{
		return this;
	}
};
//void Date::operator<<(ostream&o)
//{
//	o << _year << "/" << _month << "/" << _day << endl;
//}
ostream&  operator<<(ostream& o, const Date& d)
{

}
int main()
{
	Date d1;
	cout << d1;
	d1.operator<<(cout);
	Date to(2022, 3, 5);
	Date off(2022, 4, 5);
	cout << (to - off) << endl;
	Date d1;
	Date d2(2022,3,4);
	Date d4 = d2 - 10;
	d4.print();
	d1.print();
	d2.print();
	d2 += 100;
	d2.print();
	d1++;//d1.operator++(&d1,任何匹配定义参数时的类型的数
	++d1;
	A a;
}