#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>

//5.函数指针

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	//对函数来说 函数名就是函数的地址 两个结果一样
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello yi";
//	char* (*pf)(char*, const char*) = &my_strcpy;
//	(*pf)(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//代码1
//  (*(void (*)())0)();
// 0强制类型转换为一个地址，没参数，函数指针，返回类型是void
//代码2
//  void (*signal(int, void(*)(int)))(int);
//signal是一个函数声明 返回类型 函数名 可以没有参数
//参数的的一个类型是int,第二个是函数指针类型（传一个函数的地址）
//返回类型为void的函数
//signal返回类型是一个函数指针
//简化代码2
//typedef void(*pf_t)(int);
//pf_t signal(int, pf_t);

//6.函数指针数组

//void menu()
//{
//	printf("********************************\n");
//	printf("******1. add      2. sub *******\n");
//	printf("******3. mul      3. div *******\n");
//	printf("******      0.exit       *******\n");
//	printf("********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu;
//		printf("请选择：>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个数字：>");
//			scanf("%d", &x, &y);
//			ret = Add(x, y);
//			printf("结果是:%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个数字：>");
//			scanf("%d", &x, &y);
//			ret = Sub(x, y);
//			printf("结果是:%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个数字：>");
//			scanf("%d", &x, &y);
//			ret = Mul(x, y);
//			printf("结果是:%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个数字：>");
//			scanf("%d", &x, &y);
//			ret = Div(x, y);
//			printf("结果是:%d\n", ret);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			pritf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//

//int add(int a, int b) 
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0, add, sub, mul, div }; //转移表
//	while (input)
//	{
//		printf("*************************\n");
//		printf(" 1:add             2:sub \n");
//		printf(" 3:mul             4:div \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//		}
//		else
//			printf("输入有误\n");
//		printf("ret = %d\n", ret);
//	}
//	return 0;
//}

//7.指向函数指针数组的指针

//指向函数指针数组的指针是一个 指针 指针指向一个 数组 ，数组的元素都是 函数指针

//int main()
//{
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[5])(int, int);//函数指针数组
//	int(*(*pfArr)[5])(int, int);
//	int(*(*pfArr)[5])(int, int) = &pfArr;
//}

//8.回调函数

//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一
//个函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该
//函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或
//条件进行响应。

#include<stdlib.h>

//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1};
//	//int arr2[] = { 2.0, 1.0 , 3.0 ,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	qsort(arr, sz, 4, cmp_int);
//	print_arr(arr,sz);
//	return 0;
//}

//void* 可以接受任意数据类型的地址
//void*不能+-整数的操作也不能解引用

int int_cmp(const void* p1, const void* p2) {
	return (*(int*)p1 - *(int*)p2);
}
void _swap(void* p1, void* p2, int size) {
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}