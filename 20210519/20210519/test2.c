#include<stdio.h>
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int pos = 0;
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//计算ret哪一位为1 就说明5和6不一样
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//			break;
//	}
//	pos = i;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >> pos & 1 == 1)
//		{
//			num1 ^= arr[i];
//		}
//	}
//	num2 = ret ^ num1;
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a + b > c && b + c > a && c + a > b)
		{
			if (a == b && b == c)
				printf("等腰三角形\n");
			else if ((a == b) && a != c || (a == c && a != b) || (b == c) & b != a)
				printf("等边三角形\n");
			else
				printf("普通三角形");

		}
		else
			printf("不是三角形\n");
	}
	return 0;
}