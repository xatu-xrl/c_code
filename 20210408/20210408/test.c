#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//指针
//局部指针变量没有初始化时里面就是随机值，因此指向那个位置不一定，故将其看成是野指针
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//short 跳两个字节
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6 12
//	return 0;
//}

//两个指针相减，指针必须指向一段连续空间，减完之后的结构代表两个指针之间相差元素的个数
//指针中存储的是地址，地址可以看成一个数据，因此是可以比较大小的

//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容。
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", arr);不能读空格
//	gets(arr);
//	reverse(arr);
//	printf("$s\n", arr);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
//2+22+222+2222+22222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//
//	for (i = 0; i < n; i++) 
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//153＝1^3＋5^3＋3^3，
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		int count = 1;
//		while(tmp/=10)
//		{
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//打印菱形.
int main()
{
	//分上下
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0;i < line - 1;i++)
	{
		int j = 0;
		for (j=0;j<=i;j++)
		{
			printf(" ");
		}
		for (j = 0; j <(line -1-i)*2-1 ;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}