#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define DEFAUL_SZ 3
#define INC 2

//#define MAX 1000
#define MAX_NAME 20
#define MAX_TELE 12
#define MAX_ADDR 100
#define MAX_QQ 12
#define MAX_SEX 5
//类型的声明+函数的声明
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	char qq[MAX_QQ];
	char sex[MAX_SEX];
	short age;
}PeoInfo;

//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;//有效个数
//}Contact;

//假设默认可以存放五个人的信息
typedef struct Contact
{
	PeoInfo *data;//数据
	int sz;//有效个数
	int capacity;//通讯录当前的容量
}Contact;

//初始化通讯录
void Init_Contact(Contact* pc);
//添加一个人的信息
void add_contact(Contact* pc);
//显示信息
void show_contact(Contact* pc);
//删除指定的联系人
void del_contact(Contact* pc);
//查找联系人
void search_contact(Contact* pc);
//修改联系人
void modify_contact(Contact* pc);
//排序
void sort_contact(Contact* pc);
//销毁
void destory_contact(Contact* pc);