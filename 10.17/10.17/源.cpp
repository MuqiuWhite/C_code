#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//char* my(char*de,char* str)
//{
//	assert(de && str);
//	char* dest = de;
//	char* s1;
//	char* s2;
//	if (*str == '\0')
//		return de;
//	while (*dest)
//	{
//		s1 = dest;
//		s2 = str;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//
//		if (*s2 == '\0')
//		{
//			return dest;
//		}
//		dest++;
//	}
//	return NULL;
//int strcmp(char * de,const char*str,size_t n)
//{	
//	assert(de && str);
//	char* dest = de;
//	while (n--)
//	{
//		if (*dest++ < *str++)
//		{
//			return -1;
//		}
//		else if (*d++ > *s++)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//	while (n--)
//	{
//		if (*de++ < *sou)
//		{
//			return-1;
//		}
//		else
//			return 1;
//	}
//	return 0;

	/*while (*de != '\0')
	{
		de++;
	}

	while (*de++ = *sou++ && n--);*/
	/*while ((*des++ = *sou++) != '\0' && (n--))
	{
		
	}*/

	/*while (*de == *sou)
	{
		if (*de == '\0')
		{
			return 0;
		}
		a++;
		b++;
	}
	return de -sou;*/

	/*while (*des )
	{
		des++;
	}
	while (*des++ = *sou++)
	{
		
	}*/

	/*while ((*(des ++)=*(sou++))!= '\0')
	{
		;
	}*/
	
	/*if (*a != '\0')
	{
		return 1 + mystrlen(a + 1);
	}
	else
		return 0;*/
	/*
	char* p = a;
	while (*a != '\0')
	{
		a++;
	}
	size_t size = a - p;
	*/
//}
//
//int main()
//{
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char* pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char p[] = "zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char* str = NULL;
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}

#include <string.h>
#include <stdio.h>

//int memcopy(const char* p)
//{
//	int s = 0, i = 1;
//	if (*p == ' ')
//	{
//		p++;
//	}
//
//	if (*p == '-')
//	{
//		i = -1;
//	}
//
//	if (*p == '-' || *p == '+')
//	{
//		p++;
//	}
//
//	while (*p >= '0' && *p <= '9')
//	{
//		s = s *10+ (*p - '0');
//		p++;
//	}
//	s = s * i;
	/*assert(de && str);
	const char* dest = (char*)de;
	const char* strr = (char*)str;
	while ((n--) && *dest == *strr)
	{
		dest++;
		strr++;
	}
	return *dest - *strr;*/
	

	/*if (dest < str)
	{
		while (n--)
		{
			*(char*)de = *(char*)str;
			dest = (char*)dest + 1;
			str = (char*)str + 1;
		}

	}
	else
	{
		while (n--)
		{
			*((char*)dest + n) = *((char*)str + n);
		}
	}*/
//	return s;
//}

int main()
{
	//const char* p = "abcdef"; 
	//printf("%d\n", sizeof(&p[0] + 1));
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a[3]));
	return 0;
}
