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
    //˼·��������Ϊ�ݼ�ʱ��flag1=1��������Ϊ����ʱ��flag2=1
    //��flag1&&flag2=1����flag1��flag2ͬʱΪ1�����м�����Ҳ�м���˵���䲻����������
    //������Ϊflag1��flag2����ʼ��Ϊ0������������ȻΪ0��˵��ֻ��Ϊ��������ֻ��Ϊ�ݼ������Ϊ��������
     for(int i=0;i<n-1;i++){
         if(a[i]>a[i+1]) flag1=1;
         else if(a[i]<a[i+1]) flag2=1;
     }
    if(flag1&&flag2) printf("unsorted\n");
    else printf("sorted\n");
    return 0;
}
