#include<stdio.h>
//1
//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3)//0-255
//	{
//		++j;
//	} 
//	printf("%d\n", j);//
//	return 0;
//}
//2
//int main()
//{
//	char a = 0, ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		a++;
//		putchar(ch);
//	}
//	printf("\n");//1abcedf2df     1AbCeDf2dF
//}
//3
//struct One {
//	double d;
//	char c;
//	int i;
//}
//  struct Two
// {
//char c;
//double d;
//int i;
//}
//4   16 16   8 16 24   
//4
//void main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long c = a + b;
//	printf("%ld\n", c);//-1
//}
//

//如果斐波那契数列中的一个数比当前数要大，则开始计算数列中的当前数和前一个数，哪一个数更近，则算出步数。

//int main()
//{
//	int n = 0;
//	int f1 = 0;
//	int f2 = 1;
//	int f3 = 0;
//	scanf("%d", &n);
//	while (1)
//	{
//		if (f2 == n)
//		{
//			printf("%d\n", 0);
//			break;
//		}
//		else if(f2 > n)
//		{
//			if (abs(f1 - n) > abs(f2 - n))
//				printf("%d", abs(f2 - n));
//			else
//				printf("%d", abs(f1 - n));
//			break;
//		}
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//	return 0;
//}

//请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

//class Solution {
//public:
//	void replaceSpace(char* str, int length) {
//		// 计算空格的个数
//		int space_num = 0;
//		for (int i = 0; i < length; ++i)
//		{
//			if (str[i] == ' ')
//				space_num++;
//		} /
//			/ 从后往前，依次挪动字符，遇到空格替换为 % 20
//			for (int i = length - 1; i >= 0; --i)
//			{
//				if (str[i] == ' ')
//				{
//					space_num--;
//					str[i + space_num * 2] = '%';
//					str[i + space_num * 2 + 1] = '2';
//					str[i + space_num * 2 + 2] = '0';
//				} e
//					lse
//				{
//				str[i + space_num * 2] = str[i];
//				}
//			}
//	}
//};

//预处理只会处理#开头的语句，编译阶段只校验语法，链接时才会去找实体，所以是链接时出错的，故选C。这里附上每个步骤的具体操作方式：

//预处理：相当于根据预处理指令组装新的C / C++程序。经过预处理，会产生一个没有头文件（都已经被展开了）、宏定义（都已经替换了），没有条件编译指令（该屏蔽的都屏蔽掉了），
//没有特殊符号的输出文件，这个文件的含义同原本的文件无异，只是内容上有所不同。
//
//编译：将预处理完的文件逐一进行一系列词法分析、语法分析、语义分析及优化后，产生相应的汇编代码文件。编译是针对单个文件编译的，只校验本文件的语法是否有问题，不负责寻找实体。
//
//链接：通过链接器将一个个目标文件（或许还会有库文件）链接在一起生成一个完整的可执行程序。 链接程序的主要工作就是将有关的目标文件彼此相连接
//，也就是将在一个文件中引用的符号同该符号在另外一个文件中的定义连接起来，使得所有的这些目标文件成为一个能够被操作系统装入执行的统一整体。
//在此过程中会发现被调用的函数未被定义。需要注意的是，链接阶段只会链接调用了的函数 / 全局变量，如果存在一个不存在实体的声明（函数声明、全局变量的外部声明），但没有被调用，依然是可以正常编译执行的。

//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;
//第二个不是指针类型

//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
#define BITCHANGE(n)   ((((n) & 0x55555555) << 1 + ((n)& 0xaaaaaaaa) >> 1))
int main()
{
	int a = 10;
	int b = BITCHANGE(a);
	printf("%d\n", b);
	return 0;
}
