// ͷ�ļ� 
#include <stdio.h>
#include <stdlib.h>
#define na 20
#define te 20
#define em 30
#define cate 20
#define first_size 3
enum Select
{
	Exit,
	Add,
	Dele,
	Dind,
	Modify,
	Sort,
	Show,
};

typedef struct people
{
	char name[na];
	char tele[te];
	char category[cate];
//	{
//		friend_kind,
//		colleague_kind,
//		business_kind,
//		common_kind,
//	}kind;
	char email[em];
	
}people;

typedef struct num_con  //ͨѶ¼
{
	people *data;//�ṹ������ ��źö�����Ϣ 
	int size;//��¼��ǰ���е�Ԫ�ظ��� 
	int capa;//��ǰ������� capa ==sizeʱ���������� 
}num_con;


void menu();
void Initialize_con(num_con *ps);//��ʼ��

void add(num_con *ps);//���� 

void dele(num_cpn *ps);//ɾ��
 
void show(const num_con *ps);//��ʾ 
