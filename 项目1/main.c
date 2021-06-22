#include "contact.h"
/* 测试 */

int main(int argc, char *argv[]) 
{	
	//创建通讯录 
	num_con con;
	
	Initialize_con(&con); //初始化 
	int input=0; 
	int i=0;
//读取数据	
	read(&con);	

	do
	{
		menu();
		printf("快点选择鸭！\n");
		scanf("%d",&input);
		switch(input)
		{
			case Exit:
				save(&con);//保存数据 
				destory(&con);//销毁通讯录并释放内存 
				system("cls"); 
				printf("退出成功\n"); 
				break;
				
			case Add:
				add(&con);
				break;
				
			case Dele:
				dele(&con); 
				break;
				
			case Find:
				i=find_kind(); 
				if(i==1)
					findname(&con);
				else if(i==2) 				
					findkind(&con);
				break;
				
			case Modify:
				modify(&con);
				break;
				
			case Sort:
				sort(&con);
				break;
				
			case Show:
				show(&con);
				break;	
			
			case Destory:
				destory(&con);
				break;
				
			case Save:
				save(&con);
				break; 
				
			default:
				printf("输入错误鸭，请重新输入哦！\n");
				break; 
		}
		
	}while(input); 

	return 0;
}
