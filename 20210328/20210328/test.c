#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//����һ���ṹ������
//int flaot
//struct Book
//{
//	char name[20];//����
//	short price;//����
//};
//
//int main()
//{
//	struct Book b;//����һ����
//	//�ַ������� ��name������
//	strcpy(b.name, "����");
//	b.price = 15;
//
//	printf("%s\n", b.name);
//	printf("%d\n", b.price);
//	return 0;
//}

//struct B
//{
//	int a;
//	char c;
//};
//struct S
//{
//	int a;
//	char arr[20];
//	int* p;
//	struct B sb;//�ṹ���Ա�����Ͷ�����
//};
//
//int main()
//{
//	int a = 0;//�����������ҳ�ʼ��
//
//	struct B b = {20,'w'};
//	struct S s = { 100,"hehe",NULL,{33,'Q'} };
//	printf("%d %s %d %c\n",s.a,s.arr,s.sb.a,s.sb.c);
//	return 0;
//}

//�ṹ���Ա����
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void print1(struct Stu stu)
//{
//	printf("%s %d\n", stu.name, stu.age);
//}
//
//void print2(struct Stu* ps)
//{
//	//printf("%s %d\n", (*ps).name, (*ps).age);
//	printf("%s %d\n",ps->name,ps->age);
//}
//int main()
//{
//	struct Stu s = { "Ѧ��ͨ",20 };
//	//printf("%s %d\n", s.name, s.age);
//	//print1(s);
//	//��ֵ����
//	print2(&s);
//  //��ַ����
//	return 0;
//}

//�ṹ�崫�� ��ѡ����2
//�������ε�ʱ�򣬲�������Ҫѹջ��.�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ󣬵��������½�

int Add(int c, int d)
{
	int z = 0;
	z = c + d;
	return z;
}
int main()
{
	int a = 0;
	int b = 20;
	int c = Add(a, b);
	return 0;
}
//�κ�һ�κ������ã���Ҫ�����ڴ�ռ�
//�������ջ��
