#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//先赋值，再自增
//	////int b=++a;//先自增。再赋值
//	//printf("a=%d b=%d\n", a, b);
//	printf("%d\n", a++);
//	//10
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	//if (18 <= age <= 40)
//	//先算第一个是1，再算就是真
//	if (age>=18&&age<=40)
//	{
//		printf("成年\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	//只实现了一次a的自增，左边要是0，右边不用看。
//	printf("%d %d %d %d\n", a, b, c, d);
//	return 0;
//}
//陷阱就是第一个0
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++&&++b&&d++;
	//只实现了一次a的自增，左边要是0，右边不用看。
	printf("%d %d %d %d\n", a, b, c, d);
	return 0;
}