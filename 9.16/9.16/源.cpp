#define _CRT_SECURE_NO_WARNINGS 1

//size_t my_strlen(const char a[])
//{
//    int i = 0;
//    for (i = 0; a[i] != '\0'; i++)
//    {
//        ;
//    }
//    return i;
//}
//
//size_t my_strlen2(char *a)
//{
//    char* b = a;
//    while (*b != '\0')
//    {
//        b++;
//    }
//    return b - a;
//}
//
//size_t my_strlen3(char *a)
//{
//    if (*a != '\0')
//    {
//        return 1 + my_strlen(a + 1);
//    }
//    else
//        return 0;
//}
//char* my_strcpy(const char* a, char* b)
//{
//    assert(a && b);
//    char* c = b;
//    while (*a)
//    {
//        *b++ = *a++;
//    }
//    return c;
//}
//char* my_strcat( char* a, const char* b)
//{
//    assert(a && b);
//    char* c = a;
//    //1.找到目标字符串的末尾
//    while (*c)
//    {
//        c++;
//    }
//    //2.追加原字符串，直到\0
//    while (*c++ = *b++)
//    {
//        ;
//    }
//    return a;
//}
//int my_strcmp(const char* a, const char* b)
//{
//    while (*a == *b)//先判断每一个字符是否相同
//    {
//        if (*a == '\0')//相同的话，再判断是否都为\0
//        {
//            return 0; //都为\0的话，则说明两字符串相同
//        }
//        a++;
//        b++;
//    }
//    return a - b; //返回不相同的字符ASCII码相减后的值
//}
//char* my_strstr(char* str1,char* str2)
//{
//	assert(str1 && str2);
//	char* s1;
//	char* s2;
//	char* cp = str1;
//	
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;	
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;//从a的每一个字符开始匹配，并记录匹配起始点
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;//不相同，从下一个字符开始重新匹配
//	}
//
//	//*cp指向a的‘\0’了，依旧找不到
//	return NULL;
//}
//void* my_memcpy(void* a, const void* b, int sz)
//{
//    while (sz--)
//    {
//        *(char*)a = *(char*)b;
//        a = (char*)a + 1;
//        b = (char*)b + 1;
//
//    }
//    return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

void* my_memmove(void *a,const void *b,int sz)
{
    assert(a && b);
    void* ret = a;

}

int main()
{
    int a[] = { 0,1,2,3,4,5,6,7,8,9 };
	my_memmove(a+2,a,3*sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        printf("%d  ", b[i]);
    }

	return 0;
}
//查找arr1中arr2第一次出现的位置
//char arr1[] = "i am a student, hello!";
//char arr2[] = "student";
//if (ret == NULL)
//{
//	printf("找不到\n");
//}
//else
//{
//	printf("%s\n", ret);
//}
//char* my_strstr(char* a,char* b)
//{
//    
//    assert(a && b);
//    char* s1;
//    char* s2;
//    char* cp=a;
//    if (*b == '\0')
//        return NULL;
//    while (*cp)
//    {
//        s1 = cp;//从a的每一个字符开始匹配，并记录匹配起始点
//        s2 = b;
//        while (*a == *b && *s2 && *s1)
//        {
//            s1++;
//            s2++;
//        }
//        if (*s2 == '\0')//找到b了
//        {
//            return cp;
//        }
//        cp++;//不相同，从下一个字符开始重新匹配
//    }
//
//    return NULL;//*cp指向a的‘\0’了，依旧找不到
//}
//
//
//int main()
//{
//
//    char a[200] = "i am a student,hello!";
//    char b[200] = "student";
//    char *ss=my_strstr(a, b);
//    if (ss == NULL)
//        printf("找不到\n");
//    else
//        printf("%s\n", ss);
//    return 0;
//}

/*   if (i > 0)
   {
       printf("a大\n");
   }
   else if (i == 0)
   {
       printf("相同\n");
   }
   else
       printf("b大\n");*/

//printf("%d\n", my_strlen(a));
//
//printf("%d\n", my_strlen2(a));
//
//printf("%d\n", my_strlen3(a));


 /*
}
int s[1000000];
   int n, m, i, count;
    char stri[10];
    for (i = 0; i <= 1000000; i++)
    {
        itoa(i, stri, 10);
        if (strstr(stri, "4") == NULL && strstr(stri, "62") == NULL)
        {
            s[i] = 1;
        }
        else
        {
            s[i] = 0;
        }
    }
    while (scanf("%d %d", &n, &m) != EOF)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        count = 0;

        for (i = n; i <= m; i++)
        {
            count += s[i];
        }
        printf("%d\n", count);
    }*/

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) == 2 && a != 0 && b != 0)
//	{
//		int i = 0, flag = 0;
//		for (i = a; i < b; i++)
//		{
//			char j[100] = { "(char)i" };
//			int k = 0;
//			for (k = 0; k < strlen(j); k++)
//			{
//				if (j[k] == '4' || (j[k] == '6'&&j[k+1]=='2'))
//				{
//					flag++;
//				}
//			}			
//		}
//		printf("%d\n", i - flag);
//	}
//	return 0;
//}

//int t = 0, a = 0, b = 0;
//while (scanf("%d", &t) != EOF)
//{
//	while (t--)
//	{
//		scanf("%d%d", &a, &b);
//		if (a % b == 0)
//		{
//			printf("YES\n");
//		}
//		else
//			printf("NO\n");
//	}
//}

//int t = 0, n = 0;
//while (scanf("%d", &t) != EOF)
//{
//	while (t--)
//	{
//		scanf("%d", &n);
//		float h[100] = { 0 };
//		int i = 0;
//		float max = 0;
//		while (n--)
//		{
//			scanf("%f", &h[i]);
//			if (h[i] > max)
//			{
//				max = h[i];
//			}
//			i++;
//		}
//		printf("%.2f\n", max);
//	}
//}