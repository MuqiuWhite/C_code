//���� 
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
	//����ͨѶ¼ 
	struct contact con;//����data size capa
	//��ʼ��ͨѶ¼ 
	init(&con);
	int a;
	do
	{
		menu();
		printf("��ѡ��\n");
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
			case Sor://����
				sor(&con);
				break;
			case Exit:
				destory(&con);
				printf("�����˳�\n"); 
				break;
			default:
				printf("��Ч������������\n");
				break; 
		}
	}while(a);
	
return 0;
 } 
