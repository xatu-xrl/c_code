#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//求两个数二进制中不同位的个数
//方法1
//int get_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//方法2
//int get_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d", count);
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}

//1.表达式求值先看是否存在整形提升或算术转换，再进行计算
//2.表达式真正计算的时候先看相邻操作符的优先级决定先算谁
//3.相邻操作符的优先级相同的情况下，看操作符的结合性决定计算顺序

//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//表达式(++i)+(++i)+(++i)，只有操作符的优先级和结合性，没法确定唯一计算路径
//所以这个表达式可能因为计算顺序的差异导致结果是不一致的，所以表达式是错误的表达式。
//可以在VS和Linux gcc测试，结果可能有差异。

int i;
int main()
{
    i--;//全局变量 默认初始化为0
    if (i > sizeof(i))
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }
    return 0;
}
//sizeof(i)求i类型大小是4，，但是sizeof的返回值类型实际为无符号整形，因此编译器会自动将左侧i自动转换为无符号整形的数据，-1对应的无符号整形是一个非常大的数字，超过4或者8

