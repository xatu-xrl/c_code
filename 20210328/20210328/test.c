#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//声明一个结构体类型
//int flaot
//struct Book
//{
//	char name[20];//书名
//	short price;//定价
//};
//
//int main()
//{
//	struct Book b;//创建一本书
//	//字符串拷贝 到name数组里
//	strcpy(b.name, "恶意");
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
//	struct B sb;//结构体成员的类型多样化
//};
//
//int main()
//{
//	int a = 0;//创建变量并且初始化
//
//	struct B b = {20,'w'};
//	struct S s = { 100,"hehe",NULL,{33,'Q'} };
//	printf("%d %s %d %c\n",s.a,s.arr,s.sb.a,s.sb.c);
//	return 0;
//}

//结构体成员访问
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
//	struct Stu s = { "薛宇通",20 };
//	//printf("%s %d\n", s.name, s.age);
//	//print1(s);
//	//传值调用
//	print2(&s);
//  //传址调用
//	return 0;
//}

//结构体传参 优选方法2
//函数传参的时候，参数是需要压栈的.如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，导致性能下降

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
//任何一次函数调用，需要申请内存空间
//申请的是栈区
