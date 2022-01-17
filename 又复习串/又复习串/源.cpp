//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//#include <stdlib.h>
#include "ss.h"
int BF(const char *a,const char *b)
{
	assert(a && b);
	int sa = strlen(a);
	int sb = strlen(b);
	int i = 1, j = 0;
	while(i<sa&&j<sb)
	{
		if (a[i] == b[j])
		{
				j++;
				i++;
		}
		else
			{
				j = 0;
				i = i - j + 1;
			}
			
		
	}
	if (j >= sb)
		return i - j;
	return  -1;
}

void getnext(const char* a, int *next)
{
	next[0] = -1;
	next[1] = 0;
	int i = 2;
	int k = 0;
	int size = strlen(a);
	while (i < size)
	{
		if (k == -1 || a[i - 1] == a[k])
		{
			next[i] = k + 1;
			i++; k++;
		}
		else
		{
			k = next[k];
		}
	}
}

int KMP(const char* a, const char* b, int pos)
{
	assert(a && b);
	int sa = strlen(a);
	int sb = strlen(b);
	if (sa == 0 || sb == 0)
		return -1;
	if (pos < 0 || pos >= sa)
		return -1;

	int* next = (int*)malloc(sizeof(int)*sa);
	getnext(b, next);
	int i = pos, j = 0;
	while (i < sa && j < sb)
	{
		if (j == -1 || a[i] == b[j])
		{
			i++;
			j++;
		}
		else
			j = next[j];

		
	}
	if (j >= sb)
	{
		return i - j;
	}
	return -1;
}
int main()
{
	/*const char *a = "abcabcdcabd";
	const char *b = "abcd";
	printf("%d\n",BF(a, b));
	printf("%d\n",KMP(a, b,0));*/


	sc s, s1, s2, s3, s4;
}
