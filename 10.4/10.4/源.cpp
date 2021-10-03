#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int check()
//{
//	int i = 1;
//	return (*(char*)&i);
//}

//或者
//int re_check()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//
//}
//int main()
//{
//	int c=re_check();
//
//	if (c == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//int a = 1;
//int b = -2;


//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
/*int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);*/

//#include <stdio.h>
#include <string.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

#include <stdio.h>

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
	/*int n = 9;
	float* pn = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pn的值为：%f\n", *pn);

	*pn = 9.0;
	printf("n的值为：%d\n", n);
	printf("*pn的值为：%f\n", *pn);*/
int main()
{
	float a = 5.5;
	
	return 0;
}