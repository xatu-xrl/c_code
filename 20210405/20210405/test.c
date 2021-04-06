#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//debug调试版本
//release发布版本，优化过的，在代码大小和运行速度都是最优的
//f5启动调试，用来跳到下一个断点
//f9创建和取消断点
//f10逐过程，处理一个过程，通常函数调用或者一条语句
//f11逐语句，进入函数内部，很细节（常用）
// ctrl+f5 开始执行不调试
//监视窗口 内存  反汇编  寄存器（比内存快）
//调用堆栈

//void test2()
//{
//	printf("test2()\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()//也是被其他函数调用的
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		//c,c++对数组下标不做检查
//		printf("hehe\n");
//	}
//	//运行结果 找到12变成0时，i变成0，然后1的地址和arr[12]一样，接着死循环
//	//原因：1.栈区的使用习惯，先使用高地址空间，在使用低地址空间
//	//     2.数组随着下标的增长，地址由高到低变化
//	return 0;
//}

//void my_strcpy(char*dest,char* src)
//{
//	while (*src!='\0')
//	{
//		*dest++= *src++;
//		
//		
//	}
//	*dest = *src;//拷贝的'\0'
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//看是不是0
//	{
//		;
//	}
//	//拷贝'\0'
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "xxxxxxxxxx";
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//	return 0;
//}

//assert-断言 <assert.h> 可能隐藏的问题暴露出来防止传空指针
//本质上是一个宏

//const 进行保护
//int main()
//{
//	const int num = 10;
//	int n = 20;
//    int  *  p = &num;//const放在左边 限制*p
//	//const放在*的左边，表示指针指向的内容（*p)不能通过指针（p）进行改变，但是指针变量p本身是可以修改的
//	//const放在*的右边，表示指针指向的内容（*p)可以通过指针（p）进行改变，但是指针变量p本身是不可以修改的
//	*p = 20;
//
//	printf("%d\n", num);
//
//	return 0;
//}

//模拟实现strlen的实现
//assert const 返回值都得注意

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "adc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
