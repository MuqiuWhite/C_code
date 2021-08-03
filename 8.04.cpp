#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int n,space=0;
//	char a;
//	while (scanf("%c%d", &a, &n) == 2 && a != '@')
//	{
//		getchar();
//		if(space>0)
//			printf("\n");
//		int i, j, k;
//		if (n == 1)
//			printf("%c\n", a);
//		else
//		{
//			for (i = 1; i < n; i++)
//			{
//				for (j = 1; j < n + i; j++)
//				{
//					if (j == n - i + 1 || j == n + i - 1)
//						printf("%c", a);
//					else
//						printf(" ");
//				}
//				printf("\n");
//			}
//			for (i = 1; i <= 2 * n - 1; i++)
//			{
//				printf("%c", a);
//			}
//			printf("\n");
//		}
//		space++;
//	}
//		
//
//
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	int n = 0,i,j,k=0;
//	char a[100][16];
//	
//	while (scanf("%d", &n) != EOF && n != 0)
//	{
//		getchar();
//		int num=0;
//		int max = -1;
//		for (i = 0; i < n; i++)
//		{
//			scanf("%s", &a[i]);
//		}
//
//		for (i = 0; i < n; i++)
//		{
//			num = 0;
//			for (j = i + 1; j < n; j++)
//			{
//				if (strcmp(a[i], a[j]) == 0)
//				{
//					num++;
//				}
//			}
//			if (num > max)
//			{
//				max = num;
//				k = i;
//			}
//
//		}		
//		puts(a[k]);
//					
//	}
//	return 0;
//}
    //int n = 0, i=0, j=0;
    //int max = 0;
    //char a[1000][16];
    //int* size;
    //while (scanf("%d", &n) && n != 0)
    //{
    //    
    //    size = (int*)malloc(sizeof(int) * n);
    //    for (i = 0; i < n; i++)
    //    {
    //        scanf("%s", &a[i]);
    //    }

    // 

    //    for (i = 0; i < n; i++)
    //    {
    //        size[i]=1;
    //        for (j = i + 1; j < n; j++)
    //        {
    //            if (strcmp(a[i], a[j]) == 0)
    //            {
    //                size[i]++;

    //            }
    //        }
    //    }
    //    max = size[0];
    //    int k = 0;
    //    for (i = 0; i < n; i++)
    //    {
    //        if (size[i]> max) 
    //        {
    //            max = size[i];
    //            k = i;
    //        }
    //    }
    //    printf("%s\n", a[k]);
    //}

//#include <string.h>
//#include <stdlib.h>
#include <stdio.h>
int main()
{
    __int64 a, b, sum;
    while (scanf("%I64X %I64X", &a, &b)!=EOF)
    {        
        sum = a + b;
        if (sum >= 0)
            printf("%I64X\n", sum);
        else
            printf("-%I64X\n", -sum);
    }
    return 0;
}