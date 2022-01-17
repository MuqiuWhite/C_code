#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define max 100
typedef struct sc
{
	int length;
	char a[max];
}sc;
void Asign(sc& str, char* b);

void copy(sc& str, sc b);

bool equal(sc str, sc b);
