#include <stdio.h>
int main()
{
	int a[10]={10,9,8,7,6,5,4,3,2,1};
	int l=0,r=9,i=0;
	int mid=0;
	int key=6;
	while(l<=r)
	{
	 	mid=(l+r)/2;
		if(a[mid]>key)
			r=mid-1;
		else if(a[mid]<key)
			l=mid+1;
		else 
			break;
		
		
	}
	if(l>r)
		printf("ÕÒ²»µ½ÍÛ\n");
	else
		printf("%d\n",mid);
return 0;
 } 
 
 
 
//	int s=1,i=1,j=1;
//	for(i=1;i<10;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			s=i*j;
//			printf("%-d*%-d=%-d\t",j,i,s);
//		}
//		printf("\n");
//	}
