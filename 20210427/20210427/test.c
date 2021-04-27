#include<stdio.h>
//自定义类型：结构体，枚举，联合

//结构体
//结构体类型的声明
//结构的自引用
//结构体变量的定义和初始化
//结构体内存对齐
//结构体传参
//结构体实现位段（位段的填充& 可移植性）

//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1,s2;//全局变量
//int main()
//{
//	struct Stu s = {"xue",20,"男"};
//	return 0;
//}

//匿名结构体类型
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;


//typedef struct
//{
//	int data;
//		Node* next;
//}Node;
////这样写代码，可行否？
////解决方案：
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node//省略struct 自引用时 不可以搞成匿名类型

//结构的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};

//结构体变量的定义和初始化
//struct Point
//{
//	int x;
//	int y;
//}p1; 
//
//struct Node
//{
//	struct Point p;
//	struct Node* next;
//};
//int main()
//{
//	struct Point p = {3,5};
//	printf("x=%d y=%d\n", p.x, p.y);
//	struct Node n = { {5,9},NULL };//结构体嵌套
//	printf("x=%d y=%d\n", n.p.x, n.p.y);
//	return 0;
//}

//构体内存对齐
//#include<stddef.h>
//struct S
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	//struct S s = { 0 };
//	//printf("%d\n",sizeof(s));//8
//	printf("%d\n", offsetof(struct S, c));//求结构体成员偏移量  0
//	printf("%d\n", offsetof(struct S, i));//4
//	return 0;
//}

//struct S
//{
//	char c1;//181
//	int i;//484
//	char c2;//181
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//VS中默认的值为8
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处
//结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍

//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//printf("%d\n", sizeof(struct S2));//8 小的放在一起 节省空间

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//printf("%d\n", sizeof(struct S3));//16

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;//0 1-7
//	struct S3 s3;//8  16  8-23
//	double d;//8 24 31
//};
//printf("%d\n", sizeof(struct S4));//

//为什么存在内存对齐 ?
//1. 平台原因(移植原因)： 不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能
//在某些地址处取某些特定类型的数据，否则抛出硬件异常。
//2. 性能原因： 数据结构(尤其是栈)应该尽可能地在自然边界上对齐。 原因在于，为了访问未对齐的
//内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。
//总体来说：
//结构体的内存对齐是拿空间来换取时间的做法。

//修改默认对齐数
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为8
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//结构体传参

struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//结构体地址传参
void print2(const struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //传结构体
	print2(&s); //传地址
	return 0;
}

//函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
//结论： 结构体传参的时候，要传结构体的地址
