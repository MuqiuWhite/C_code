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
void left(char* arr, int k)//��������2��
{
	assert(arr);
	int i = 0;
	int sz = strlen(arr);
	k %= sz;//�����ظ�����
	rever(arr,arr+k-1);//������ߣ�a,b
	rever(arr+k,arr+sz-1);//�����ұߣ�c,f
	rever(arr, arr + sz - 1);//���������ַ���
}

int is_left(char a1[], char a2[])
{
	int sz1 = strlen(a1);
	int sz2 = strlen(a2);
	if (sz1 != sz2)
	{
		return 0;
	}

	strncat(a1, a1, sz1);// ��a1�ĺ��׷��һ��a1�е��ַ���


	if (NULL == strstr(a1, a2))//�ж�a2�Ƿ���a1���ַ���
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
	strncat(arr1, arr1,3);//�ַ����Լ����Լ�����

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