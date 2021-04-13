#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//调试
//C程序常见的错误分类包含
//编译错误
//链接错误
//运行时错误
//没有栈溢出
//F10 - 是逐过程调试，遇到函数不进入函数
//F11 - 是逐语句调试，可以观察调试的每个细节

//调整数组使奇数全部都位于偶数前面。
//void move_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	move_arr(arr, sz);
//	return 0;
//}
