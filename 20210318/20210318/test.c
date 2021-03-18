#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>






//求一个整数存储在内存中的二进制中1的个数
//6
//000000000000000000000000110
//1.这个方法负数不可用
//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 6;
//	int ret = count_one(a);
//	printf("%d\n", ret);
//	return 0;
//}

//方法2 用每一位和1按位与确定有没有一 循环32次
//int count_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ( ( (n >> i) & 1 )== 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int ret = count_one(a);
//	printf("%d\n", ret);
//	return 0;
//}

//方法三
//n=n&(n-1)每一次让最右边的1消失
//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int ret = count_one(a);
//	printf("%d\n", ret);
//	return 0;
//}
//交换两个数，不能创建临时变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf(" a = %d b = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;//按位与
//	//011都是1才1
//	//101
//	//001
//	int d = a | b;//按位或都是0才是0
//	int e = a^b;//按位异或 不一样是1一样是0
//	return 0;1
//}
//移位操作符
//>>
//<<
//int main()
//{
//	//
//	int a = -1;
//	//10000000000000000000000000000001原码
//	//11111111111111111111111111111110反码
//	//11111111111111111111111111111111补码
//	//在内存中存的是补码
//	int b = a >> 1;
//	//1.算数右移，右边丢弃，左边补上符号位（最高位符号位正数是0）
//	//2.逻辑右移，右边丢弃，左边补零
//	printf("b=%d\n", b);
//	//编译器采用的是算术右移
//	return 0;
//}
//int main()
//{
//	int a = 7;
//	//a >> 1;
//	int b = a << 1;
//	printf("b=%d\n",b);
//	//左移操作符移动的是二进制位
//	//左边抛弃，右边补零
//	//4个字节，8个bit位，32
//	return 0;
//}

//int main()
//{
//	int a = 7 / 2;
//	printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	double a = 7 / 2.0;
//	printf("a=%lf\n", a);
//	return 0;
//}
