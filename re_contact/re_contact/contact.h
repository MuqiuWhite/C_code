#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#pragma once
#define na_max 20
#define sex_max 5
#define tele_max 15
#define addr_max 30
#define MAX 1000

typedef struct People//һ���˵���Ϣ
{
	char name[na_max];
	int age;
	char sex[sex_max];
	char tele[tele_max];
	char addr[addr_max];
}People;

//ͨѶ¼
typedef struct Contact
{
	People data[MAX];
	int sz;//��ǰͨѶ¼��Ч��Ϣ����
}Contact;

//��ʼ��
void init_con(struct Contact* ps);
//����
void add_con(struct Contact* ps);
//��ʾ
void show_con(struct Contact* ps);
