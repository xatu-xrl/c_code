#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//指针类型的意义
//1.指针进行解引用操作的时候，能一次性访问几个字节
//2.指针加减整数的时候，决定了向前或者向后一步有多大（距离）
//int main()
//{
//	int a = 0x11223344;
//	int ch = 'w';
//	int* pa = &a;
//	char* pc = &ch;
//	//32为下一个指针变量大小是4个字节
//	//*pa = 0;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//008FFECC
//	printf("%p\n", pa+1);//008FFED0
//
//	printf("%p\n", pc);//008FFECC
//	printf("%p\n", pc+1);//008FFECD
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10;i++)
//	{
//		printf("%d\n",*(pa + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* pa = arr;
//	//char* pa = arr;
//	//01 00 00 00 02 00 00 00
//	//-1找到第二个00
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(pa + i));
//	}
//	return 0;
//}

//short*+1 跳过2个字节
//int----- ----4-----
//float--- ----4-----
//double-- ----8-----
//野指针
//1.指针没初始化
//2.越界访问
//3.指针指向的空间释放
//int mian()
//{
//	int* p;//此时为野指针，默认为随机值
//	*p = 20;
//	return 0;
//}
//
//
//
//int mian()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)//循环超出，越界访问
//	{
//		*p = 0;
//		p++;
//	}
//	return 0;
//}
//
//1.指针初始化
//2.小心越界
//3.空间释放 NULL
//4.用前检查有效性

//1.指针加减整数
//2.指针减指针
//3.指针的关系运算

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//得到的是指针与指针之间的个数
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//指针-指针
//}
//int main()
//{
//	char arr[] = "adc";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//	return 0;
//}

//二级指针
int main()
{
	int a = 0;
	
	int *pa = &a;

	int** ppa = &pa;

	return 0;
}