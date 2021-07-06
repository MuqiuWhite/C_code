#include <stdio.h>
#include <string.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		char a[51]="0";
		getchar();
		for(i=0;i<n;i++)
		{
			gets(a);
		
		int flag=1;
		int size=strlen(a);
		for(i=0;i<size;i++)
		{
			if(a[0]>='0'&&a[0]<='9')
			{
				flag=0;
				break;
			}
			if((a[i]>='0'&&a[i]<='9')
			||(a[i]>='a'&&a[i]<='z')
			||(a[i]>='A'&&a[i]<='Z')
			||a[i]=='_');
								
			else
				flag=0;
		}		
		if(flag)
			printf("yes\n");
		else
			printf("no\n");
		}
	}
	return 0;
 } 
 
// #include <stdio.h>
//int main()
//{
//	int n,i,j,count,k;
//	float m,stu_sum,cor[5]={0},cor_sum;
//	 
//	int s[50][5]={0};//分数 
//	while(scanf("%d%f",&n,&m)!=EOF)
//	{
//		count=0;
//		k=0;
//		for(i=0;i<n;i++)
//		{
//			for(j=0;j<m;j++)
//			{
//				scanf("%d",&s[i][j]);
//			}
//		}
//		//每个学生 
//		for(i=0;i<n;i++)
//		{
//			stu_sum=0;
//			for(j=0;j<m;j++)
//			{
//				stu_sum=stu_sum+s[i][j];
//			}
//			stu_sum/m; 
//			if(i==n-1)
//				printf("%.2f\n",stu_sum/n);
//			else
//				printf("%.2f ",stu_sum/n);			
//		}
//		
//		//每门课 
//		for(i=0;i<m;i++)
//		{
//			cor_sum=0; 
//			for(j=0;j<n;j++)
//			{
//				cor_sum=cor_sum+s[j][i];
//			}
//			cor[k]=cor_sum/n;
//			k++;
//			if(i==m-1)
//				printf("%.2f\n",cor_sum/n);
//			else
//				printf("%.2f ",cor_sum/n);			
//		}
//		
//		for(i=0;i<n;i++)
//		{
//			int flag=0;//初始化 
//			for(j=0;j<m;j++)
//			{
//				if(cor[j]>s[i][j])//个人有一门课成绩低于平均成绩 
//					flag++;
//			}
//			if(flag==0)
//				count++; //一个人所有科目都过平均线，人数加一		
//		}
//		printf("%d\n\n",count);	
//		
//	}
//    
//	
//	return 0;
// } 
