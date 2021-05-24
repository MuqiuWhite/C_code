//声明函数 
#include <stdio.h>
#include <string.h>

#define max 1000
#define max_name 10
#define max_sex 5
#define max_addr 30
#define max_tele 30

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
struct contact 
{
	struct people data[max];//存放一个人信息 
	int size;//记录当前已有的元素个数 
};

void init (struct contact *ps);//初始化 
void add(struct contact *ps);//增加 
void sho(const struct contact *ps);//显示 
void del(struct contact *ps);//删除 
void sea(struct contact *ps);//查找 
//查找要删除的人在什么位置，找到了返回下标，找不到返回-1
void mod(struct contact* ps);//修改
void sor(struct contact* ps);//排序 
