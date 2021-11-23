#include "list.h"

void test()
{
	LT ps;
	init(&ps);
	Insert(&ps, 0, 2);
	Insert(&ps, 0, 1);
	PushFront(&ps, 0);
	PushBack(&ps, 3);
	print(&ps);

	PopFront(&ps);
	print(&ps);
	Erase(&ps, 1);
	print(&ps);
	PopBack(&ps);
	print(&ps);
}

int main()
{
	test();

}