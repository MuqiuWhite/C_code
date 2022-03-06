#include <iostream>
using namespace std;
//class A
//{
//public :
//	A(int a)//没有默认构造函数
//	{
//		_a = a;
//	}
//private:
//	int _a;
//};
//class Date
//{
//	friend istream& operator>>(istream& in, Date& d);
//public:
//	//Date(int year, int month, int day)//构造函数，初始化列表--成员变量定义的地方，在定义时初始化
//	//	:_year(year)
//	//	, _month(month)
//	//	, _day(day)
//	//    ,_N(10)
//	//{}
//	explicit Date(int year, int month, int day,int i,const A&aa)
//
//		//  error C2166: 左值指定 const 对象
//		// 这里报错说明在构造函数体内时，成员变量已经定义出来了
//	//_N = 10;
//		:_N(10)
//		,_ref(i)//调用默认构造函数
//		//,_a(-1)
//	{	//在函数体内初始化，先定义，然后再赋值
//		_a = aa;
//		_year = year;//内置类型
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;//声明
//	int	_month;
//	int	_day;
//	const int _N;
//	int& _ref;//引用
//	A _a;//没有默认构造函数的自定义类型成员变量
//};
////istream& operator>>(istream& in, Date& d)
////{
////	return in;
////}
//class B
//{
//public:
//	B(int a = 0)
//		:_a(a)
//	{
//
//	}
//	B(const B& a)//拷贝构造
//		:_a(a._a)
//	{
//
//	}
//	int get()
//	{
//		return _Sc;
//	}
//	class d
//	{
//	private:
//		int _b;
//	};
//private:
//	int _a;
//	static int _Sc;//属于整个类，所有对象，生命周期是一个程序
//};
//int B::_Sc = 66;
////定义一个数组，数组是自定义类型，会去调用Sum的构造函数，对n个对象依次初始化
//int main()
//{
//	//Date d1(1,2,3);//对象定义/对象实例化
//	//Date d1(2);//用2构造一个临时对象 Date(2),再用这个对象拷贝构造d2
//	//Date d2 = 2;//但是C++在连续的过程中，多个构造会被优化，合二为一，这里直接就是一个构造
//	double d = 1;
//	const int& i = d;//传引用，给的是临时变量，得加const
//	const int j=1;//常量必须在定义时初始化
//	//a1._Sc;a2._Sc
//
//}
int main()
{
	int* p = (int*)malloc(sizeof(int));
	int* p2 = new int;
	int* p3 = new int[5];
	delete p2;
	delete[] p3;
	A* p1 = (A*)malloc(sizeof(A) * 5);
	A* p4 = new A[5];//自定义类型，开空间，调用构造函数初始化
	A* p5 = new A[2]{ 1,2 };
	errno;

	try
	{

	}
	catch (const exception& e)
	{
		e.what();
	}
}