#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//指针的进阶

//1.字符指针

//int main()
//{
//
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%c\n", &pc);
//
//	char* p = "adcdef";//字符串市场量，想要修改用数组
//	printf("%s\n",p);//p存的是a的地址
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//		printf("arr1 = arr2\n");
//	else
//		printf("arr1 != arr2\n");
//
//	if (p1 == p2)
//		printf("p1 == p2\n");
//	else
//		printf("p1 != p2\n");
//
//	return 0;
//}

//2.指针数组

//int* arr1[10]; //整形指针的数组
//char* arr2[4]; //一级字符指针的数组
//char** arr3[5];//二级字符指针的数组

//3.数组指针

//int main()
//{
//	/*char arr[5];
//	char (*pa)[5]=&arr;*/
//
//	char* ch[5];
//	char* (*pc)[5] = &ch;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组指针 = 数组的地址
//	int(*p)[10]=&arr;//拿到数组的地址
//	return 0;
//}
//p先和*结合，说明p是一个指针变量，然后指着指向的是一个大小为10个整型的数组。所以p是一个

//这里要注意：[]的优先级要高于*号的，所以必须加上（）来保证p先和*结合。

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*arr;
//	&arr;*/
//	printf("%p", arr);//首元素地址
//	printf("%p", &arr);//数组地址
//	printf("%p", arr[0]);
//	//地址值是一样的
//	printf("arr+1 = %p\n", arr + 1);//40个 跳过一个数组
//	printf("&arr+1= %p\n", &arr + 1);//4个
//}

//数组指针的使用

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p1 + i));
//	}
//	return 0;
//}

//指针数组，一般常见于二维数组

//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	return 0;
//}

//int arr[5];
//int* parr1[10];//parr1是一个数组，数组有十个元素，每个元素类型是int*
//int(*parr2)[10];//parr2是一个指针，指向数组，有十个元素，每个元素类型是int
//int(*parr3[10])[5];//parr3是一个数组，放了是个指针，指向一个大小为5的数组，元素是int

//4.数组传参和指针传参

//一维数组传参

//void test(int arr[])//1
//{}
//void test(int arr[10])//2
//{}
//void test(int* arr)//3
//{}
//void test2(int* arr[20])//4
//{}
//void test2(int** arr)//5
//{}
//int main()
//{
//	int arr[10] = { 0 };//1 2 3可以
//	int* arr2[20] = { 0 };//45可以
//	test(arr);
//	test2(arr2);
//}

//二维数组的传参

//void test(int arr[3][5])//1
//{}
//void test(int arr[][])//2
//{}
//void test(int arr[][5])//3
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//void test(int *arr)//4
//{}
//void test(int* arr[5])//5
//{}
//void test(int (*arr)[5])//6
//{}
//void test(int **arr)//7
//{}
//int main()
//{
// int arr[3][5] = {0};
// test(arr);//1 3 6可以 2 4 5 7不可以
//}

//一级指针传参

//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}
//int* p1 ,p2 前者指针 后者整形

//二级指针数组

//void test(int** ptr) 
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

void test(char** p) {

}
int main()
{
	char c = 'b';
	char* pc = &c;
	char** ppc = &pc;
	char* arr[10];
	test(&pc);
	test(ppc);
	test(arr);//Ok?
	return 0;
}