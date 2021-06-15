// 头文件 
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

typedef struct num_con  //通讯录
{
	people *data;//结构体数组 存放好多人信息 
	int size;//记录当前已有的元素个数 
	int capa;//当前最大容量 capa ==size时，容量已满 
}num_con;


void menu();
void Initialize_con(num_con *ps);//初始化

void add(num_con *ps);//增加 

void dele(num_cpn *ps);//删除
 
void show(const num_con *ps);//显示 
