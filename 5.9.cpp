#include <stdio.h>
int main()
{
	int a[]={5,8,7,6,2};
	int y,*p=&a[1],i;
	y=(*--p)++;
	int s;
	s= * --p;
	printf("%d ",y); 
	printf("%d ",s); 
	printf("%p\n ",&y);
	for(i=0;i<5;i++)
	{
		printf("%p ",&a[i]); 
		printf("%d\n ",a[i]); 
		
	}
	int a[5]={3,25,31,1,5},t,o,i,j;
	for(i=1;i<5;i++)
	{
		t=a[i];
		j=i-1;
		while(a[j]>t && j>=0)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=t;
}
	for(i=0;i<5;i++)
	printf("%d,",a[i]);
	printf("\n"); 

	char c[]="0123456789ABCDEF";
	char result[33];
	int dec,base,i,r;
	for(i=0;i<32;i++)
		result[i]=' ';
	result[32]='\0';
	printf("ÊäÈë\n");
	scanf("%d%d",&dec,&base);
	i=32;
	while(dec>0)
	{
		r=dec%base;
		result[i--]=c[r];
		dec/=base;
	}
	puts(result);

	int a=2,b=3,*p;
	p=&a;
	printf("p=%d,*p=%d,a=%d,b=%d\n",p,*p,a,b);
	*p=5;
	printf("p=%d,*p=%d,a=%d,b=%d\n",p,*p,a,b);
	p= &b;
	printf("p=%d,*p=%d,a=%d,b=%d\n",p,*p,a,b);
	
	int a=2,*z=NULL;
	if(z!=NULL)
	{
		*z=3;
		printf("%d\n",*z);
	}
	z=&a;
	if(z!=NULL)
	{
		*z=5;
		printf("%d\n",*z);
	}
	int a=2,*p=&a;
	scanf("%d",p);
	printf("%d\n",a);
	
	char a[10]="ABCD",*p=a;

	puts(p);
		printf("%c",*p);

	int a=2,*p=&a,*q;
	q=p;
	printf("A:%d,%d,%d\n",a,*p,*q);
	*q=5;
	printf("B:%d,%d,%d\n",a,*p,*q);	
	*p=7;
	printf("C:%d,%d,%d\n",a,*p,*q);
	int a[10]={0,11,22,33};
	int i,*p=a;
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(a+i));
	}

	char a[]={"abced"},*p=a;
	while(*p)
	puts(p++);
	
	
	
	
	
	
	
return 0;
 } 
