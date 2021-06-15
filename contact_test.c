//测试 
#include "contact.h"

void menu()
{
	printf("*******************\n");
	printf("***1.add   2.del***\n");
	printf("***3.sea   4.mod***\n");
	printf("***5.sho   6.sor***\n");
	printf("*******0.exit******\n");	
	printf("*******************\n");	
}

int main()
{
	//创建通讯录 
	struct contact con;//包含data size capa
	//初始化通讯录 
	init(&con);
	int a;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d",&a); 
		switch(a)
		{
			case Add:
				add(&con);
				break;
			case Del:
				del(&con); 
				break;
			case Sea:
				sea(&con);
				break;
			case Mod:
				mod(&con);
				break;
			case Sho:
				sho(&con);
				break;
			case Sor://排序
				sor(&con);
				break;
			case Exit:
				destory(&con);
				printf("即将退出\n"); 
				break;
			default:
				printf("无效，请重新输入\n");
				break; 
		}
	}while(a);
	
return 0;
 } 
