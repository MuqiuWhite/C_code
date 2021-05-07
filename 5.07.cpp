#include <stdio.h> 
#include <string.h> 

int main()
{
//	int a[10]={0,1,2,4,5,6,7,8,9,10};
//	int i;
//	int len=10;
//	int key=3;
//	int data=1;
//	if(len<20)
//	{
//		for(i=len;i>key;i--)
//		{
//			a[i]=a[i-1];
//		}
//		a[key]=3;
//		len++;
//		for(i=0;i<len;i++)
//		{
//			printf("%d  ",a[i]);
//		}
//	}

//	int a[10]={0,1,2,3,4,5,6,7,8,9};
//	int i;
//	int loc=3;
//	int len=10;
//	if(loc<len)
//	{
//		for(i=loc;i<len;i++)
//			a[i]=a[i+1];
//		len--;
//	}
//	for(i=0;i<len;i++)
//		{
//			printf("%d  ",a[i]);
//		}

//	char a[10]="123456789";
//	int i=0;
//	gets(&a[1]);
//	gets(&a[2]);
//	puts(a);
//	scanf("%s",&a[1]);
//	puts(a);
//	for(i=0;i<10;i++)
//		{
//			printf("%s  ",a);
//		}

//	char a[10],b[10]={"abcd"};
//	strcpy(a,{"efgh"});
//	puts(a);
//	strcpy((&a[1],&a[2]),(&b[2],&b[3]));
//	puts(a);
//	strcpy(&a[1],&b[3]);
//	puts(a);

	char a[5][11],b[11];
	int i=0,j;
    for(i=0;i<5;i++)	gets(a[i]);
	int max=0;
	for(i=0;i<4;i++)
	{
		max=i;
		for(j=i+1;j<5;j++)
		{
		if(strcmp(a[j],a[max])<0)
			max=j;
		
	if(max!=i)
	{
		strcpy(b,a[i]);
		strcpy(a[i],a[max]);
		strcpy(a[max],b);
	}
	}
}
	for(i=0;i<5;i++)
	{
		puts(a[i]);
	}
return 0;
}
