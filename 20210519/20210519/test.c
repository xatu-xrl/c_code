#include<stdio.h>

//宏和函数

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//宏
//	int max = MAX(a, b);
//	printf("%d\n", max);
//
//	max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//用宏的原因
//1. 用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。所以宏比函数在程序
//的规模和速度方面更胜一筹。
//2. 函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。反之这个宏怎可
//以适用于整形、长整型、浮点型等可以用于 > 来比较的类型。宏是类型无关的

//宏的缺点
//每次调用宏都要插入到程序中，会增加代码长度
//没法调试
//于类型无关，不够严谨
//可能会带来运算符优先级的问题，容易出错

//把宏名全部大写 函数名不要全部大写

//#undef 取消定义

//命令行定义

//条件编译

//#define __DEBU__
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__ 
//		printf("%d\n", arr[i]);//为了观察数组是否赋值成功。
//#endif //__DEBUG__
//	}
//	return 0;
//}


//文件包含

//#ifndef __TEST_H__
//#define __TEST_H__
////头文件的内容
//#endif //__TEST_H__

//offsetof
//#define Offsetof(sn,mn)  (size_t)&(((sn*)0)->mn)  
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//	double d;
//};
//int main()
//{
//	struct S s = { 0 };
//	pirntf("%d\n", Offsetof(struct S, c1));//假设一个地址为0
//	return 0;
//}


//feofeof函数是在文件读取结束后，判断文件读取结束的原因的，是读取失败结束，还是遇到文件尾结束