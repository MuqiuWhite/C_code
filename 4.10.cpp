#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	char a1[]="he hate you now!!";
//	char a2[]="#################";
//	int left = 0;
//	int right=strlen(a1)-1;
//	printf("%s\n",a2);
//	while(left<=right){
//	Sleep(1000);//毫秒
//	system("cls");
//	a2[left]=a1[left];
//	a2[right]=a1[right];
//
//	
//	left++;
//	right--;
//	printf("%s\n",a2);}
//char arr1[] = "he hate you now!!";
//char arr2[] = "#################";
//int left = 0;
//int right = strlen(arr1)-1;
//printf("%s\n", arr2);
////while循环实现
//while(left<=right)
//{
//Sleep(1000);
//arr2[left] = arr1[left];
//arr2[right] = arr1[right];
//left++;
//right--;
//printf("%s\n", arr2);
//
//}
//	int i=0;
//	char p[29]={0};
//	
//	for(i=0;i<3;i++){
//	printf("输入:");
//	scanf("%s",&p);
//	if(strcmp(p,"1234")==0)
//		{printf("成功");break;} 
//	else
//		printf("失败");} 
//	if(i==3)
//	printf("退出");
	//return 0;
//int a=24,b=18;
//int c=0;
//c=a%b;
//a=b;
//b=c
//求a是否是素数--只能被1和本身整除--用2到a-1除--能整除，不是素数 
//int a=0,b;
//for(a=100;a<=200;a++) {
//
//for(b=2;b<a;b++){
//
//if(a%b==0) break;} 
//if(a==b)
//{
//printf("%d",a);
//	}	
//}
//	int a=23;
//	int b=2;
//	int c=0;
//	while(a%b){
//	
//	c=a%b;
//	a=b;
//	b=c;}
//	printf("%d",b);
//	int a=0,b=0;
//	for(a=101;a<200;a++){
//		for(b=2;b<a;b++)
//		{if(a%b==0)
//		 break;}
//	if(a==b)
//	printf("%d",a);
//}
//	int year=0;
//	for (year=1000;year<=2000;year++)
//	{	if(((year%4==0)&& (year%100!=0))||(year%400==0))
//		{printf("%d",year);}
//	}
//	int a=0,b=0;
//	for(a=1;a<=99;a++)
//	{
//		if(a%10==9)
//			b++;
//		if(a/10==9)
//			b++;
//			
//	}
//	printf("%d",b);
//	int a=0,i=1;
//	double sum;
//	for(a=1;a<=99;a++)
//	{
//		sum+=i*1.0/a;
//		i=-i;
//	} 
//	printf("%lf",sum);
//	int a[]={-1,-2,-3,-4};
//	int max=a[0];
//	int sz,i=0;
//	sz=sizeof(a)/sizeof(a[0]);
//	for(i=1;i<=sz;i++)
//	{
//		if(a[i]>max)
//		max=a[i];
//	}
//	printf("%d",max);
//	int a,b,s;
//	for(a=1;a<=9;a++)
//	{
//		for(b=1;b<=a;b++)
//		{
//			s=a*b;
//			printf("%d*%d=%-2d ",a,b,s);
//		}
//		printf("\n");
//		
//	}
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("是否进入猜数字游戏?\n");
	printf("###################\n");	
	printf("####1 是   0 否####\n");		
	printf("###################\n");		
}
void game()
{
	int guss;
	int ret;	
	ret=rand()%100+1;
//	printf("%d",ret);
	while(1)
	{
		printf("输入数字：");
		scanf("%d",&guss); 
		if(guss>ret)
			printf("猜大了\n");
		else if(guss<ret)
			printf("猜小了\n");
		else
		{
			printf("好耶！\n");
			break; 
		}
	}	
}
int main() 
{
	int a;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择："); 
		scanf("%d",&a);
		switch(a)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出\n"); 
			break;
		default:
			printf("请重新输入\n");
			break;
		}	
	}while(a); 
	
return 0;	
 } 
 
