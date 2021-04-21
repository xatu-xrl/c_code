#include <stdio.h>
//函数指针
//int main()
//{
//    int a = 10;
//    int arr[10] = { 0 };
//    //动态内存开辟 上面有局限性 内存大小无法改变
//    // malloc
//    // free 会还给操作系统
//    return 0;
//}

//定义一个函数指针，指向的函数有两个int形参并且返回一个函数指针，返回的指针指向一个有一个int形参且返回int的函数
//int (*(*F)(int, int))(int)

//函数指针数组

//声明一个指向含有10个元素的数组的指针，其中每个元素是一个函数指针，该函数的返回值是int，参数是int*
//int (*(*p)[10])(int *)

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1 6
//	return 0;
//}

//下面代码中print_arr函数参数设计哪个是正确的？（ c）
//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//print_arr(arr, 3, 5);

//C.void print_arr(int(*arr)[5], int row, int col);
//D.void print_arr(int(*arr)[3], int row, int col);

//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//字符串左旋

void reverse_part(char* str, int start, int end) //将字符串从start到end这一段逆序
{
	int i, j;
	char tmp;

	for (i = start, j = end; i < j; i++, j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

void leftRound(char* src, int time)
{
	int len = strlen(src);
	int pos = time % len;
	reverse_part(src, 0, pos - 1); //逆序前段
	reverse_part(src, pos, len - 1); //逆序后段
	reverse_part(src, 0, len - 1); //整体逆序
}