//�������� 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 1000
#define max_name 10
#define max_sex 5
#define max_addr 30
#define max_tele 30
#define default_size 3
enum option
{
	Exit,
	Add,
	Del,
	Sea,
	Mod,
	Sho,
	Sor
	
};
struct people
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char addr[max_addr];
	char tele[max_tele];
};
typedef struct contact //ͨѶ¼ 
{
	struct people *data;//�ṹ�������źö�����Ϣ 
	int size;//��¼��ǰ���е�Ԫ�ظ��� 
	int capa;//��ǰ������� size==camʱ���������� 
}sc;

void init (struct contact *ps);//��ʼ�� 
void add(struct contact *ps);//���� 
void sho(const struct contact *ps);//��ʾ 
void del(struct contact *ps);//ɾ�� 
void sea(struct contact *ps);//���� 
//����Ҫɾ��������ʲôλ�ã��ҵ��˷����±꣬�Ҳ�������-1
void mod(struct contact* ps);//�޸�
void sor(struct contact* ps);//���� 
void destory(struct contact* ps);
