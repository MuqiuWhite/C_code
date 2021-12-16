#include "list.h"

void print(SL ps)
{
	for (int i = 0; i < ps.size; i++)
	{
		printf("%d  ", ps.a[i]);
	}
	printf("\n");

}
void des(SL* ps)
{


	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
void insert(SL* ps, int n, SLDataType x)//ºóÍùÇ°
{
	check(ps);
	assert(n <= ps->size);
	for (int i = ps->size-1; i >= n; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[n] = x;
	ps->size++;

}
void pop(SL* ps, int n)
{
	assert(ps);
	assert(n < ps->size);
	for (int i = n; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
void pushfront(SL* ps, SLDataType x)
{
	//insert(ps, 0, x);

	check(ps);
	assert(x <= ps->size);
	for (int i = ps->size - 1; i >= 0; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}
void popfront(SL* ps)
{
	//pop(ps, 0);

	assert(ps);

	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
void pushback(SL* ps, SLDataType x)
{
	insert(ps, ps->size, x);
	check(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void popback(SL* ps)
{
	assert(ps->size > 0);
	//pop(ps, ps->size - 1);
	ps->size--;
}
void init(SL* ps)
{
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
int fint(SL* ps, SLDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return NULL;
}
void check(SL*ps)
{
	if (ps->capacity == ps->size)
	{
		int newc = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SL* newn = realloc(ps->a,newc*sizeof(SL));
		ps->capacity = newc;
		ps->a = newn;
	}
	
}