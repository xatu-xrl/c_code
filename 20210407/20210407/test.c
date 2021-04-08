#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

//浮点型在内存中的存储
// 5.5
// 101.1
// 表示2的-1次方
//(-1)^s*1.011*2^2 s=0为正数 m只存储小数点后面的 后面补1
//(-1)s^M*2^E
//s1bit e8个bit  m23bit
int main()
{
	float f = 5.5f;//不写f默认是double类型
	//(-1) ^ 0 * 1.011 * 2 ^ 2     e+127 因为要表示负数double-1023
	//全0 -126 也不补1 一个很接近0的小树
	//全1 有效数字全为0
	return 0;
}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;//强制类型转换
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);//整形的方式放进去，发生了改变，说明存储方式不一样
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

//例子
//unsigned char i = 0;
////无符号 0->255
//int main()
//{
//	for (i = 0; i <= 255; i++)//恒为真
//	{
//		printf("hello word\n");//死循环
//	}
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-1 -2 -3...-128 127 126... 0
//	}
//	printf("%d", strlen(a));//'\0'ASCII值为0
//	return 0;
//}


//int main()
//{
//	unsigned int i;//>=0
//	for (i = 9; i >= 0; i--)//判断条件恒为真，死循环
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//
