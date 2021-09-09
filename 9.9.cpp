//#include <stdio.h>
//int main()
//{
//	int n,i;
//	while (scanf("%d", &n)!=EOF)
//	{
//		int a[100] = { 0 };
//		int flag1 = 0, flag2 = 0;
//		while (n--)
//		{
//			scanf("%d", &a[i]);
//		}
//		for (i = 0; i < n-1; i++)
//		{
//			if (a[i] > a[i + 1])
//				flag1 = 1;
//			else if(a[i]<a[i+1])
//				flag2 = 1;
//		}
//		if (flag1&&flag2)
//			printf("unsorted\n");
//		else
//			printf("sorted\n");
//	}
//
//	return 0;
//}
#include<stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a[n],flag1=0,flag2=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    //思路：当序列为递减时，flag1=1；当序列为递增时，flag2=1
    //若flag1&&flag2=1，即flag1和flag2同时为1，序列既有增也有减，说明其不是有序序列
    //否则，因为flag1和flag2均初始化为0，则二者相与必然为0，说明只能为递增或者只能为递减，因此为有序序列
     for(int i=0;i<n-1;i++){
         if(a[i]>a[i+1]) flag1=1;
         else if(a[i]<a[i+1]) flag2=1;
     }
    if(flag1&&flag2) printf("unsorted\n");
    else printf("sorted\n");
    return 0;
}
