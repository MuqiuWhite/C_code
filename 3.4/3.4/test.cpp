#include <iostream>
#include "test.h"
using namespace std;
int& ja(int i)
{
	static int a[10];
	return a[i];
}
//#define Add(a,b)((a)+(b))
inline int Add(int x, int y)
{
	int ret = x + y;
	return ret;
}
 class stu
{
	char _name[12];
	int _age;
	int _id;
public:
	void init(const char* name, int age, int id)
	{
		strcpy(_name, name);
		_age = age;
		_id = id;
	}
	void print()
	{
		cout << _name << endl;
	}
};
 
 void stack::init()
 {
	 a = nullptr;
 }
int main()
{
	stack s2;
	s2.init();

	stu s1;//升级到类，类名 变量名
	s1.init("靖安",1, 1);
	s1.print();

	/*strcpy(s1.name, "靖安");
	s1.age = 1;
	s1.id = 1;*/
	/*cout << Add(1, 2) << endl;*/
	/*for (int i = 0; i < 10; i++)
	{
		ja(i) = 10 + i;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << ja(i) << endl;
	}*/
	/*const int a = 10;
	const int& a = 1;
	double b = 1.1;
	int c = b;
	int& f = b;
	const int& e = b;
	int x1 = 1, x2 = 3;
	int& y = x1 + x2;
	const int& y = x1 + x2;*/
	//cout << "" << endl;
	/*int a = 0;
	int& b = a; 
	int* p = &a;
	b = 2;
	*p = 3;*/
	//int a = 1;
	//auto  d = &a;
	//auto* b = &a;
	//const auto  c = a;
	////c = 2;
	//cout << typeid(c).name() << endl;
	//int a[] = { 1,2 };
	//for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	//{
	//	cout << a[i] << endl;
	//}
	//for (auto &x : a)//引用，取数组里的每个值给x，x是每个成员的引用。x只存在一次循环
	//{
	//	x++;
	//	cout << x << endl;
	//}
	
}