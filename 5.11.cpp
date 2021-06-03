#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define N 100
int main()
{
//	int *a[3],(*p)[3];
//	printf("a : %d, p : %d",sizeof(a),sizeof(p));

//	char a[100],b[100],s[200];
//	scanf("%s%s",a,b);
//	int len1=strlen(a),len2=strlen(b);
//	int r=len1>len2?len1:len2;
//	int i;
//	if(len1<=100&&len2<=100)
//{
//	for(i=r-1;i<0;i--)
//	{
//		if(len1>len2)
//		{
//			s[i]=a[i]+b[len2-1];
//			len2--;
//		}
//		else if(len1<len2)
//		{
//			s[i]=a[len1-1]+b[i];
//			len1--;
//		}
//		else
//			s[i]=a[i]+b[i];
//	}
//}
//	for(i=0;i<r;i++)
//	{
//		if(s[i]=='10')
//		{
//			s[i-1]=s[i-1]+1;
//			s[i]='0';
//		}
//	}
//	puts(s);

//	char a[100],t;
//	gets(a);
//	int i=0,j=strlen(a)-1;
//	while(i<j)
//	{
//		t=a[i];
//		a[i]=a[j];
//		a[j]=t;
//		i++;
//		j--;
//	}
//	
//	puts(a); 

//	char a[5][6]={"we","he","you","me","she"},*p[5],i,j,*t;
//	for(i=0;i<5;i++)
//	{
//		p[i]=a[i];
//	} 
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<4-i;j++)
//		{
//			if(strcmp(p[j],p[j+1])>0)
//			{
//				t=p[j];
//				p[j]=p[j+1];
//				p[j+1]=t;
//			}
//		printf("%s ",a[i]);
//		}
//	}
//	for(i=0;i<5;i++)
//	printf("%s\t%s\n",a[i],p[i]);
//	int a=2,b=5,*p,**pp;
//	p=&a;
//	pp=&p;
//	**pp=3;
//	printf("%d\n",**pp);
	
//	int a[2][3]={{0,1,2},{3,4,5}},i,j;
//	int *p[2];
//	int **r;
//	p[0]=a[0];
//	p[1]=a[1];
//	r=p;
//	for(i=0;i<2;i++)
//	{
//		for(j=0;j<3;j++)
//		printf("%4d",*(*(r+i)+j));
//		printf("\n");
//	}

//	int **a;
//	int m,n,i,j;
//	printf("ÊäÈë\n");
//	scanf("%d%d",&m,&n);
//	a=(int**)malloc(m*sizeof(int *));
//	for(i=0;i<m;i++)
//	{
//		a[i]=(int *)malloc(n*sizeof(int));
//	}
//	srand(time (NULL));
//	for(i=0;i<m;i++)
//	{
//		for(j=0;j<m;j++)
//		{
//			a[i][j]=rand()%100;
//			printf("%4d",a[i][j]);
//		}
//		printf("\n");
//	}
//	for(i=0;i<m;i++)
//		free(a[i]);
//	free(a);
//	int a[2]={0,1},b[2][2]={{10,11},{20,21}};
//	int (*p[3])[2];
//	p[0]=b;
//	p[1]=b;
//	p[2]=b+1;
//	printf("d,%d,%d\n",(*p[0])[1],p[2][0][1],*(*p[1]+1));
	

	
	
	
	
	
	
	
	
	
	
	


return 0;	
} 
