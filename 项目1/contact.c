//���� 
#include "contact.h"

void menu ()
{
	printf("************ͨѶ¼************\n");
	printf("***0.�˳�************1.����***\n");
	printf("***2.ɾ��************3.����***\n");
	printf("***4.�޸�************5.����***\n");
	printf("***6.��ʾ************7.���***\n");
	printf("******************************\n");	
}


void Initialize_con(num_con *ps)//��ʼ�� 
{
	ps->data=(people *)malloc(first_size*sizeof(people));//��̬��ʼ���ռ� 
	if(ps->data==NULL)
		return;
	ps->size=0;
	ps->capa=first_size; 
}


void check(num_con *ps)//����Ƿ���Ҫ���� 
{
	if(ps->size==ps->capa)
	{
		//����
		//��ʱָ��������������Ŀռ� 
		people * newcapa=(people *)realloc(ps->data,(ps->capa+1)*sizeof(people)); 
		if(newcapa!=NULL)//���ݳɹ� 
		{	
			ps->data==newcapa; 
			ps->capa+=1;//�������� 
			printf("���ݳɹ���\n"); 
		} 
		else
			printf("��Ӵ����ʧ����\n"); 
	}
}


//ѡ��������� 
int find_kind()
{
	int i=0;
	while(1)
	{
		printf("��ѡ���������\n1.������\t2.������\n");
		scanf("%d",&i);
		if(i==1||i==2)
		{
			return i;
			break;
		}
		else
		{
			printf("������������������\n"); 
		}
	}
	
} 


//��������
int find(num_con *ps,char name[na])
{
	int i=0;
	for(i=0;i<ps->size;i++)
	{
		if(strcmp(name,ps->data[i].name)==0)
			return i;
		else
			return -1;
	}
} 


//������� 
int FIND(num_con *ps,char category[cate])
{
	int i=0;
	for(i=0;i<ps->size;i++)
	{
		if(strcmp(category,ps->data[i].category)==0)
			return i;
		else
			return -1;
	}
} 


//��� 
void add(num_con *ps)
{
	check(ps);//��鵱ǰͨѶ¼����
	char a[cate];
	int b=1;
	//����һ���˵����� 
		printf("����:>\n");
		scanf("%s",ps->data[ps->size].name);//data�����±�==size 
		printf("�绰:>\n");
		scanf("%s",&(ps->data[ps->size].tele));
		
		do 
		{
		printf("���:��׼ȷ�������ѡ�ͬ�¡�����һ��:>\n");
		scanf("%s",a);
		if(strcmp(a,"����")==0||
		   strcmp(a,"ͬ��")==0||
		   strcmp(a,"����")==0||
		   strcmp(a,"һ��")==0)
		{ 
			b=0;
			strcpy(ps->data[ps->size].category,a);
		}
		else
		{
			printf("�����������������\n");
		}
		
		}while(b);
		
		printf("��ַ:>\n");
		scanf("%s",ps->data[ps->size].email);

		ps->size++;
		printf("��Ү���ɹ���ӣ�\n"); 

}


//ɾ�� 
void dele(num_con *ps)
{
	printf("ɾ��˭���أ�\n");
	char a[na];
	scanf("%s",a);
	
	//Ѱ������ 
	int result=find(ps,a);
	if(result==-1)
	{
		printf("�Ҳ�����������\n"); 		
	} 
	else
	{		
		int j=0;
		for(j=result;j<ps->size-1;j++)
		{
			ps->data[j]=ps->data[j+1];	
			 
		}
		ps->size--;
		printf("ɾ���ɹ���\n");
	}
} 


//��������  
void findkind(num_con *ps)
{
	int i=0;
	char a[cate]; 
	if(0==ps->size)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����\n");
		return;
	}
	
	printf("��������:\n������:>���ѡ�ͬ�¡�����һ��\n"); 
	scanf("%s",a);
	printf("���ڲ�����...\n");
	//���� 
	int result=FIND(ps,a);
	if(result==-1)
	{
		printf("�Ҳ�����������\n"); 		
	}
	else 
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\n","����","�绰","���","��ַ"); 
		for(i=0;i<ps->size;i++)
		{
		
			printf("%-10s\t%-10s\t%-10s\t%-10s\n)",
			ps->data[result].name,
			ps->data[result].tele,
			ps->data[result].category,
			ps->data[result].email);
		}
	}
}


//�����ֲ���
void findname(num_con *ps)
{
	int i=0;
	if(0==ps->size)
	{
		printf("ͨѶ¼Ϊ�գ��޷�����\n");
		return;
	}
	char a[na]; 
	printf("�����ֲ���:\n������:>\n"); 
	scanf("%s",a);
	printf("���ڲ�����...\n");
	
	int result=find(ps,a);
	if(result==-1)
	{
		printf("�Ҳ�����������\n"); 		
	} 
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\n","����","�绰","���","��ַ"); 
		for(i=0;i<ps->size;i++)
		{
			printf("%-10s\t%-10s\t%-10s\t%-10s\n)",
			ps->data[result].name,
			ps->data[result].tele,
			ps->data[result].category,
			ps->data[result].email);
		}
	}	
}


//�޸� 
void modify(num_con *ps)
{
	int i=0;
	if(0==ps->size)
	{
		printf("ͨѶ¼Ϊ�գ��޷��޸�\n");
		return;
	}
	
	char a[na];
	printf("������Ҫ�޸ĵ��˵�����\n");
	scanf("%s",a);
	
	//Ѱ������ 
	int result=find(ps,a);
	if(result==-1)
	{
		printf("�Ҳ�����������\n"); 		
	} 
	else
	{
		printf("���ҵ�\n�������޸ĵ�����:>\n");
		printf("�����޸�Ϊ:>\n");
		scanf("%s",ps->data[result].name);
		printf("�绰�޸�Ϊ:>\n");
		scanf("%s",ps->data[result].tele);
		printf("����޸�Ϊ:>\n");
		scanf("%s",ps->data[result].category);
		printf("�����޸�Ϊ:>\n"); 
		scanf("%s",ps->data[result].email); 
		printf("�޸ĳɹ�����\n");
	}
	
	
}


//����
void sort(num_con *ps)
{
	int i=0,j=0;
	people peo;
	printf("���ڰ�����������:>\n");
	for(i=0;i<ps->size;i++)
	{
		for(j=i+1;j<ps->size;j++)
		if(strcmp(ps->data[i].name,ps->data[j].name)>=0)
		{
			peo=ps->data[i];
			ps->data[i]=ps->data[j];
			ps->data[j]=peo;
		}
	}
	printf("�ź������뿴����~\n");
}
 
 
//��ʾ 
void show(const num_con *ps)
{
	int i=0;
	if(ps->size==0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		printf("%-10s\t%-10s\t%-10s\t%-10s\n","����","�绰","���","��ַ"); 
		for(i=0;i<ps->size;i++)
		{
			printf("%-10s\t%-10s\t%-10s\t%-10s\n",
			ps->data[i].name,
			ps->data[i].tele,
			ps->data[i].category,
			ps->data[i].email);	
		}	
	}
}


//��� 
void destory(num_con * ps)
{
	free(ps->data);
	ps->data=NULL;	
	ps->size=0;
	printf("�ѱ����\n");
		
}
 
