#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a[]={0,1,2,3};
//	int *p=a;
//	printf("%d\n",(*p)++);
//	int t=++*p;
//	printf("%d %d ",++*p,a[0]);

//	int n=10;
//	char *pc=(char*)&n;
//	int *pi=&n;
//	printf("%p ",&n);
//	printf("%p ",pc);
//	printf("%p ",pc+1);
//	printf("%p ",pi);
//	printf("%p ",);
//	int a=2,b=3;
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("%d %d",a,b);

//	int a=10,count=0,i=0;
//	while(a)
//	{
//		count++;
//		a=a&(a-1);
//	}
//	for(i=0;i<32;i++)
//	{
//		if(((a>>i)&1)==1);
//		count++; 
//		}
//	printf("%d",count);
//	void test1(int arr[])
//{
//printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//int arr[10] = {0};
//char ch[10] = {0};
//printf("%d\n", sizeof(arr));//(1)
//printf("%d\n", sizeof(ch));//(3)
//test1(arr);
//test2(ch);

//	int i = 0,a=0,b=2,c =3,d=4;
//	i = a++ && ++b && d++;
//    i = a++||++b||d++;
//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);

//	char a[]="asdf";
//	printf("%d",sizeof(a));

//	int a[5]={3,2,1,8,5};
//	int flag=0,i=0,t=0,j;
//	int sz=sizeof(a)/sizeof(a[0]);
//	for(j=0;j<sz-1;j++)//每一趟 
//	{
//	for(i=0;i<sz-i-1;i++)//每个数字跟剩下的比大小 
//	{
//		if(a[i]>a[i+1])
//		{
//			t=a[i];
//			a[i]=a[i+1];
//			a[i+1]=t;
//			flag=0;
//		}
//	if(flag==1)
//	break;	
//	}
//	}
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",a[i]);
//	}

//	int arr[10] = {1,2,3,4,5},i;
//	for(i=0;i<10;i++)
//	{
//	printf("%p\n", &arr[i]);
//	}
//	printf("%p\n", arr+1);

//	int a,i;
//	for(a=101;a<200;a++)
//	{
//		for(i=2;i<=sqrt(a);i++)
//	{
//	
//		if(a%i==0)
//		{		
//			break;
//		}
//	}
//	
//	if(i>sqrt(a))
//	printf("%d ",a);
//	}
//	int a,i;
//	for(a=101;a<200;a++)
//	{
//		for(i=2;i<a;i++)
//		{
//			if(a%i==0)
//			break;
//		}
//		if(i==a)
//		printf("%d ",a);
//	}
//	int a[5]={3,1,2,5,4};
//	int r=sizeof(a)-1;	
//	int l=0;
//	int mid;
//	int key=4;
//	while(l<=r)
//	{
//		mid=(l+r)/2;
//		if(key>a[mid])
//		
//			l=mid+1;	
//		
//		else if(key<a[mid])
//			r=mid-1;
//		else 
//		break;
//		
//	}
//	if(l<=r)
//	printf("%d ",mid);
int s(char *p)
{
	if(*p=='\0')
	return 0;
	else
}

int main()
{
	char a[]="abc";
	char *p=a;
	s(p);
return 0;	
} 
