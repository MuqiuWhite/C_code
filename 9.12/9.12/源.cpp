#define _CRT_SECURE_NO_WARNINGS 1

//#pragma once//宏
//typedef int ST; //可以随便改类型
//#define N 10;
//
//struct Sl
//{
//	ST* a;//数组指针
//	int sz;//有效数据大小
//	int capacity;//容量
//};
////尾插尾删 头插头删
//void spushback(struct SL*ps,ST x);
//void spopback(struct SL* ps);
//void spushfront(struct SL* ps, ST x);
//void spopfront(struct SL* ps);
//void sinsert(struct SL* ps, int pos, ST x);//任意位置插入
//void serase(struct SL* ps, int pos);//任意位置删除



#include "SL.h"

void init(SL* ps)
{
	//s.sz = 0;
	//s.a = NULL;
	//s.capacity = 0;

	ps->a = (ST*)malloc(sizeof(ST) * 4);
	if (ps->a == NULL)
	{
		printf("申请内存失败\n");
		exit(-1);
	}

	ps->sz = 0;
	ps->capacity = 4;//4个空间，不是字节
}

void Sinit(SL s);

//尾插尾删 头插头删

void spushback(SL* ps, ST x)
{
	assert(ps);
	ps->a[ps->sz] = x; 
	ps->sz++;
}

void sp(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d", ps->a[i]);
	}
	printf("\n");

}
void spopback(SL* ps);
void spushfront(SL* ps, ST x);
void spopfront(SL* ps);
void sinsert(SL* ps, int pos, ST x);//任意位置插入
void serase(SL* ps, int pos);//任意位置删除