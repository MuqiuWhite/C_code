#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#pragma once
#define na_max 20
#define sex_max 5
#define tele_max 15
#define addr_max 30
#define MAX 1000

typedef struct People//一个人的信息
{
	char name[na_max];
	int age;
	char sex[sex_max];
	char tele[tele_max];
	char addr[addr_max];
}People;

//通讯录
typedef struct Contact
{
	People data[MAX];
	int sz;//当前通讯录有效信息个数
}Contact;

//初始化
void init_con(struct Contact* ps);
//增加
void add_con(struct Contact* ps);
//显示
void show_con(struct Contact* ps);
