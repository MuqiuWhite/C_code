#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main() 
{
    int a, b, n;
    while (scanf("%d", &n) != EOF)
    {
        while (scanf("%d%d", &a, &b) == 2)
        {
            if (a >= 100)
            {
                a= a%100;
            }
            if (b >= 100)
            {
                b = b%100;
            }
            int s = a + b;
            if (s >= 100)
            {
                s = s%100;
            }
            printf("%d\n", s);
        }
    }
    return 0;
}
//int last(int b)
//{
//    int c = 0, sz = 0,a;
//    a = b;
//    while (a % 10)
//    {
//        c = a % 10;
//        a = a / 10;
//        sz++;
//    }
//    int i = 0;
//    for (i=1;i<=s-2;i++)
//    {
//        d = d * 10;
//    }
//    return b;
//}

//int m, n;
//while (scanf("%d%d", &n, &m) != EOF && n + m != 0)
//{
//    double sum1;
//    sum1 = sqrt(n * n - 4 * m);
//    int sum2 = sqrt(n * n - 4 * m);
//    if (sum1 == sum2) {
//        printf("Yes\n");
//    }

//    else {
//        printf("No\n");
//    }

//}
//int flag = 0;
//for (i = -100; i <=100 ; i++)
//{
//	for (j = -100; j <=100 ; j++)
//	{
//		if (i + j ==a && i * j==b)
//		{
//			printf("YES\n");
//			flag = 1;
//			break;   
//		}
//	}
//}

//if(flag==0)
//char s[100];
//double n, price, sum = 0.0;
//while (scanf("%s%lf%lf", s, &n, &price) != EOF)
//{
//	sum += n * price;

//}
//printf("%.1lf\n", sum);