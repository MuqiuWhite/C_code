#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
//BF�㷨
// str:������sub:�Ӵ�������ֵ�������Ӵ����������±꣬�����ڷ���-1
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
	int i = 2;//��ǰ����һ��
	int k = 0;//��ʾǰһ���K
	
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
	str��
	sub��
	pos��
	
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
			j = next[j];//��һ���Ͳ�һ����next[0]=-1,j=-1,��һ��ѭ����sub[-1]�����ڣ�

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

