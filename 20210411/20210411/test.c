#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//struct student
//{
//    int num;
//    char name[32];
//    float score;
//}stu;//用这个类型创建了一个变量叫stu 叫做结构体变量名
//
//typedef struct student
//{
//    int num;
//    char name[32];
//    float score;
//}stud;//stud 结构体类型名 这叫做起了个名字
//
//int main()
//{
//    return 0;
//}


//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//
//
//void fun(struct stu* p)
//{
//    printf(" % s\n", (*p).name);
//    return;
//}
//
//
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);
//    return 0;
//}
//

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);
//	total += money;//买的汽水
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty%2;//盘点手里的空瓶
//	}
//	printf("total=%d", total);
//	return 0;
//}

int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;

	scanf("%d", &money);
	if (money == 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	printf("total=%d", total);
	return 0;
}