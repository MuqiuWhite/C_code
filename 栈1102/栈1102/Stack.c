#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void Init(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;//ps->top=-1;
}
void Destory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}
//栈顶放入数据,入栈
void Push(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->capacity == ps->top)
	{
		int newca = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, newca* sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fall\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newca;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}
//出栈
void Pop(ST* ps)
{
	assert(ps);
	assert(ps->top>0);


	ps->top--;
}
STDataType Top(ST* ps)
{
	assert(ps);
	//assert(!Empty(&ps));//不为空
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}
int Size(ST* ps)
{
	assert(ps);
	return ps->top;
}
bool Empty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}