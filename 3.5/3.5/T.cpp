#include <iostream>
using namespace std;
//class A
//{
//public :
//	A(int a)//û��Ĭ�Ϲ��캯��
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
//	//Date(int year, int month, int day)//���캯������ʼ���б�--��Ա��������ĵط����ڶ���ʱ��ʼ��
//	//	:_year(year)
//	//	, _month(month)
//	//	, _day(day)
//	//    ,_N(10)
//	//{}
//	explicit Date(int year, int month, int day,int i,const A&aa)
//
//		//  error C2166: ��ֵָ�� const ����
//		// ���ﱨ��˵���ڹ��캯������ʱ����Ա�����Ѿ����������
//	//_N = 10;
//		:_N(10)
//		,_ref(i)//����Ĭ�Ϲ��캯��
//		//,_a(-1)
//	{	//�ں������ڳ�ʼ�����ȶ��壬Ȼ���ٸ�ֵ
//		_a = aa;
//		_year = year;//��������
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;//����
//	int	_month;
//	int	_day;
//	const int _N;
//	int& _ref;//����
//	A _a;//û��Ĭ�Ϲ��캯�����Զ������ͳ�Ա����
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
//	B(const B& a)//��������
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
//	static int _Sc;//���������࣬���ж�������������һ������
//};
//int B::_Sc = 66;
////����һ�����飬�������Զ������ͣ���ȥ����Sum�Ĺ��캯������n���������γ�ʼ��
//int main()
//{
//	//Date d1(1,2,3);//������/����ʵ����
//	//Date d1(2);//��2����һ����ʱ���� Date(2),����������󿽱�����d2
//	//Date d2 = 2;//����C++�������Ĺ����У��������ᱻ�Ż����϶�Ϊһ������ֱ�Ӿ���һ������
//	double d = 1;
//	const int& i = d;//�����ã���������ʱ�������ü�const
//	const int j=1;//���������ڶ���ʱ��ʼ��
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
	A* p4 = new A[5];//�Զ������ͣ����ռ䣬���ù��캯����ʼ��
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