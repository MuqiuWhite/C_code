#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;//C++库的实现定义在std的命名空间中
//using std::cout;
//using std::endl;
namespace ja
{
	int rand = 0;
	int add(int x, int y)
	{
		return x + y;
	}
	struct Node
	{
		struct Node* next;
		int val;
	};
	namespace N2
	{
		int c;
		int d;
		int Sub(int left, int right)
		{
			return left - right;
		}
	}
}

namespace ja
{
	int y = 1;
}
using namespace ja;
using ja::y;
//using struct ja::Node node;
struct SS
{
	char name[20];
	int age;
};
void func(int a,int b=11)
{
	cout << a << endl;
	cout << b << endl;
 }
//int main()
//{
//	func(1);//实参
//	func(2);//缺省值0做实参传给a
//	printf("%d\n", ja::rand);
//	ja::rand = 100;
//	printf("%d\n", ja::rand);
//	struct ja::Node node;
//	ja::add(1, 2);
//	ja::N2::Sub(1, 2);
//	ja::y = 9;
//	printf("%d\n", y);
//	int i = 10;
//	double d = 1.1;
//	cout << i << " " << d << endl; 
//	cout << y << endl;
//	struct SS s = { "靖安",99 };
//	cout <<"姓名"<< s.name << endl;
//	cout << "年龄" << s.age << endl;
//	cin >> s.name >> s.age;
//}
void f()
{
	cout << "f()" << endl;
}
void f(int a)
{
	cout << "f(int a)" << endl;
}
//int main()
//{
//	f();
//	f(11);
//	int a = 1;
//	int b = 0;
//	int& b = a;
//	int& c = a;
//	int& d = c;
//	swap(&a, &b);
//	swapp(a, b);
//}
void swap(int* x, int* y)
{
	int a = *x;
	*x = *y;
	*y = a;

}
void swapp(int& x, int& y)
{
	int a = x;
	x = y;
	y = a;
}
int &Add(int a, int b)
{
	int c = a + b;
	return c;
}
struct A { int a[10000]; };

A a;
// 值返回 -- 每次拷贝40000byte
A TestFunc1() { return a; }

// 引用返回 -- 没有拷贝
A& TestFunc2() { return a; }
void test1(A aa) 
{

}
void test2(A& bb)
{

}
void t3(const int& a)
{

}
int main()
{
	A a;
	test1(a);
	test2(a);
	int ret = Add(1, 2);
	//cout << "time" << end1 - begin1 << endl;
	const int dd = 10;
	const int& bb = dd;
	int cc = 10;
	const int& gg = cc;
}