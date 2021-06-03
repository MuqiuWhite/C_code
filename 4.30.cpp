#include <stdio.h>
//int judge(int x)
//{
//	if(x%4==0&&x%100!=0||x%400==0)
//	return 1;
//}
int judge(int a[],int x,int y)
{
	int right=x-1;
	int left=0;
	
	while(left<=right)
	{
		int mid=(right+left)/2;
		if(y<a[mid])
		{	
			right=mid-1;
				
		}
		else if(y>a[mid])
		{
			left=mid+1;
		}
		else
			return mid;
		
	}
	
			return -1;
}
int main()
{
//	int i;
//	for(i=1000;i<=2000;i++)	
//	{
//		if(judge(i)==1)
//			printf("%d ",i);
//	}
	int a[]={0,1,2,3,4,5,6,7,8,9};
	int k=7;
	int sz=sizeof(a)/sizeof(a[0]);
	if(judge(a,sz,k)==-1)
		printf("ÕÒ²»µ½");
	else 
		printf("%d",judge(a,sz,k));
	
return 0;
} 
