#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//struct student
//{
//    int num;
//    char name[32];
//    float score;
//}stu;//��������ʹ�����һ��������stu �����ṹ�������
//
//typedef struct student
//{
//    int num;
//    char name[32];
//    float score;
//}stud;//stud �ṹ�������� ��������˸�����
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

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);
//	total += money;//�����ˮ
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty%2;//�̵�����Ŀ�ƿ
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