#define _CRT_SECURE_NO_WARNINGS 1

#pragma once//宏
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int ST; //可以随便改类型
#define N 10;

typedef struct SL
{
	ST* a;//数组指针
	int sz;//有效数据大小
	int capacity;//容量
}SL,SS;

void init(SL* ps);
void sp(SL* ps);
//尾插尾删 头插头删

void spushback(SL* ps, ST x);
void spopback(SL* ps);
void spushfront(SL* ps, ST x);
void spopfront(SL* ps);

void sinsert(SL* ps, int pos, ST x);//任意位置插入
void serase(SL* ps, int pos);//任意位置删除