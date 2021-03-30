#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
//冒泡排序
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]> arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print_arr(int arr[],int sz)//遍历输出数组
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	//排成升序
	//arr是数字
	//数组传参的时候，数组名发生降级，实际上穿的是首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);//放在函数里就是收元素地址
	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}