#include "Heap.h"

int main()
{
	int a[] = { 70,56,30,25,10,75 };
	HP hp;
	Init(&hp);
	for (int i = 0; i < 6; i++)
	{
		Push(&hp, a[i]);
	}
	Print(&hp);
	return 0;
}