#include "contact.h"
/* 测试 */

int main(int argc, char *argv[]) 
{	
	//创建通讯录 
	num_con con;
	
	initialize(&con); //初始化 
	int input=0； 
	do
	{
		menu();
		printf("快点选择鸭！\n");
		scanf("%d",&input);
		switch(input)
		{
			case Exit:
				printf("退出成功\n"); 
				break;
				
			case Add:
				add(&con);
				break;
				
			case Dele:
				dele(&con); 
				break;
				
			case Find:
				findkind(&con);
				findname(&con);
				break;
				
			case Modify:
				
				break;
				
			case Sort:
				
				break;
				
			case Show:
				show(&con);
				break;	
				
			default:
				printf("输入错误鸭，请重新输入哦！\n");
		}		
	}while(n) 
	
	return 0;
}
