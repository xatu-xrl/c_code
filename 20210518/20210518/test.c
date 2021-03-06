#include<stdio.h>
//程序环境和预处理 
//   
//       翻译环境                执行环境
//       test.c                  test.exe
//      编译器  cl.exe          链接（器）link.exe
//           |
//   预编译     编译                                 汇编                                         链表
//  test.i    test.s(c语言翻译成汇编代码）  test.o(把汇编指令转换成二进制指令，形成符号表）          合并段表
//            词法分析                                                                      符号表的合并和重定位                  
//            语法分析
//            语义分析
//            符号汇总


//执行环境
//1. 程序必须载入内存中。在有操作系统的环境中：一般这个由操作系统完成。在独立的环境中，程序的载入必须
//由手工安排，也可能是通过可执行代码置入只读内存来完成。
//2. 程序的执行便开始。接着便调用main函数。
//3. 开始执行程序代码。这个时候程序将使用一个运行时堆栈（stack），存储函数的局部变量和返回地址。程序同
//时也可以使用静态（static）内存，存储于静态内存中的变量在程序的整个执行过程一直保留他们的值。
//4. 终止程序。正常终止main函数；也有可能是意外终止

//预处理
//__FILE__ //进行编译的源文件
//__LINE__ //文件当前的行号
//__DATE__ //文件被编译的日期
//__TIME__ //文件被编译的时间
//__STDC__ //如果编译器遵循ANSI C，其值为1，否则未定义

//define


//#define MAX 1000
//#define reg register //为 register这个关键字，创建一个简短的名字
//#define do_forever for(;;) //用更形象的符号来替换一种实现
//#define CASE break;case //在写case语句的时候自动把 break写上。
//// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//date:%s\ttime:%s\n" ,\
//__FILE__,__LINE__ , \
//__DATE__,__TIME__ )

//1. 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
//2. 当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。

//#and## 
//宏参数变成一个字符串
//让两边的符号变成一个符号

//带有副作用的宏
//int main()
//{
//	int a = 0;
//	int b = ++a;//有副作用
//	int b = a + 1;
//	getchar();//去输入缓冲区拿字符 使得输入缓冲区被拿走一个字符
//	return 0;
//}

//#define MAX(X,Y)      ((X)>(Y)?(X):(Y)
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int ret = MAX(a++, b++);
//	printf("%d\n", ret);
//	return 0;
