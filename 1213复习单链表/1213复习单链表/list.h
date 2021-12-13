#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDatatype;
typedef struct SL
{
	SL* next;
	SLDatatype data;
}SL;

SL* buy(SLDatatype x);
void pushfront(SL** ps, SLDatatype x);
void pushback(SL** ps, SLDatatype x);
void popfront(SL** ps);
void popback(SL** ps);
void insert(SL** ps, SL* n, SLDatatype x);
void erase(SL** ps,SL*n);
void des(SL** ps);
void print(SL* ps);
SL* find(SL* ps, SLDatatype x);