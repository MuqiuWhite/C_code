#include "contact.h"
/* ���� */

int main(int argc, char *argv[]) 
{	
	//����ͨѶ¼ 
	num_con con;
	
	initialize(&con); //��ʼ�� 
	int input=0�� 
	do
	{
		menu();
		printf("���ѡ��Ѽ��\n");
		scanf("%d",&input);
		switch(input)
		{
			case Exit:
				printf("�˳��ɹ�\n"); 
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
				printf("�������Ѽ������������Ŷ��\n");
		}		
	}while(n) 
	
	return 0;
}
