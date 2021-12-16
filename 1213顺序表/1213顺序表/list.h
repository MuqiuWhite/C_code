#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int SLDataType;

typedef struct SL
{
	SLDataType* a;
	int capacity, size;
}SL;

void print(SL ps);
void des(SL* ps);
void insert(SL* ps, int n, SLDataType x);
void pop(SL* ps, int n);
void pushfront(SL* ps, SLDataType x);
void popfront(SL* ps);
void pushback(SL* ps, SLDataType x);
void popback(SL* ps);
void init(SL*ps);
int fint(SL* ps, SLDataType x);
void check(SL* ps);