#include <iostream>
using namespace std;
class A
{
public:
	A(int a=0)
		:_a(a)
	{
		_b = new int[3];
	}
private:
	int _a;
	int * _b;
};
struct L
{
	L* n;
	L* p;
	int d;
	L(int val=1)
		:n(nullptr)
		,p(nullptr)
		,d(val)
	{}
};
//template <class c，class c2>//typename c 模板参数列表，参数类型

template <class c>
c swap (const c&x1,const c&x2)//函数参数列表，参数对象
{
	return x1 + x2;

}
  
int main()
{
	A* aa = new A(1);
	A* paa = new A(2);
	char* p1 = new char[1];
	A* p2 = (A*)operator new[](sizeof(A) * 10);
	swap(2, 3);
}