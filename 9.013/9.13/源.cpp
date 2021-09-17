#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
void rever(char* l, char* r)
{	
	assert(l&&r);
	while (l < r)
	{
		char cmp = *l;
		*l = *r;
		*r = cmp;
		l++;
		r--;
	}
}
void left(char* arr, int k)//假设逆序2次
{
	assert(arr);
	int i = 0;
	int sz = strlen(arr);
	k %= sz;//避免重复左旋
	rever(arr,arr+k-1);//逆序左边，a,b
	rever(arr+k,arr+sz-1);//逆序右边，c,f
	rever(arr, arr + sz - 1);//逆序整个字符串
}

int is_left(char a1[], char a2[])
{
	int sz1 = strlen(a1);
	int sz2 = strlen(a2);
	if (sz1 != sz2)
	{
		return 0;
	}

	strncat(a1, a1, sz1);// 给a1的后边追加一个a1中的字符串


	if (NULL == strstr(a1, a2))//判断a2是否是a1的字符串
	{
		return 0;
	}
	else
	{
		return 0;
	}
	return 0;
	
}
int main()
{
	char a1[] = "aabcd";
	char a2[] = "bcdaa";
	int ret=is_left(a1,a2);
	if (ret == 1)
		printf("YES\n");

}

int main()
{
	char arr1[20] = "aabcd";
	char arr2[20] = "bcdaa";
	int sz=
	strncat(arr1, arr1,3);//字符串自己给自己增加

}

char* str(char* b, const char* a)
{
	int sz = strlen(a);
	char* c = b;
	while (*c)
	{
		*b = *a;
		a++;
		b++;
	}
}
int main()
{
	char a[] = "abc";
	char b[] = "xxxxxxxxxxxx";
	str(a, b);
	return 0;
}