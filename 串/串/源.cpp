#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
//BF算法
// str:主串，sub:子串，返回值：返回子串在主串的下标，不存在返回-1
int BF(const char*str,const char*sub)
{
	assert(str != NULL && sub != NULL);
	if (str == NULL || sub == NULL)
		return -1;
	int lenstr = strlen(str);
	int lensub = strlen(sub);
	int i = 0, j = 0;
	while (i < lenstr && j < lensub)
	{
		if (str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if(j>=lensub)
		return i - j;
	return -1;

}


void getNext(const char* sub, int* next)
{
	next[0] = -1;
	next[1] = 0;
	int i = 2;//提前走了一步
	int k = 0;//表示前一项的K
	
	int lensub = strlen(sub);
	while (i < lensub)
	{
		if (k == -1 || sub[i - 1] == sub[k])
		{
			next[i] = k + 1;
			k++;
			i++;
		}
		else
		{
			k = next[k];
		}
	}

}

int KMP(const char* str, const char* sub, int pos)
{
	/*
	str主
	sub子
	pos找
	
	*/

	assert(str != NULL && sub != NULL);
	int lenstr = strlen(str);
	int lensub = strlen(sub);
	if (lenstr == 0 || lensub == 0)
		return -1;
	if (pos < 0 || pos >= lenstr)
		return -1;

	int* next = (int*)malloc(sizeof(int) * lensub);
	assert(next != NULL);
	getNext(sub, next);


	int i = pos, j = 0;
	while (i < lenstr && j < lensub)
	{
		if (j==-1||str[i] == sub[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next[j];//第一个就不一样，next[0]=-1,j=-1,新一轮循环：sub[-1]不存在！

		}
	}
	if (j >= lensub)
	{
		return i - j;
	}
	return -1;
}
int main()
{
	const char *a = "abcedf";
	const char* b = "edf";
	printf("%d\n", BF(a,b));
	printf("%d\n", KMP("abcabcdcabd", "abcd", 0));
	return 0;
}

