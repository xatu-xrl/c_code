#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//柔性数组
//C99 中，结构中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。
//struct S
//{
//	int num;
//	char arr[];//前面至少有一个成员
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//不包含柔性数组的大小
//	struct S*p = malloc(sizeof(struct S) + 6);//给柔性数组准备的
//	p->num = 100;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		p->arr[i] = 'a'+i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c\n",p->arr[i]);
//	}
//	struct S* ptr = realloc(p,14);//让arr可长可短
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = 'x' + i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c\n", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小

//struct S2
//{
//	int num;
//	char* arr;
//};
//int main()
//{
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2));
//	ps->num = 100;
//	ps->arr = (char*)malloc(6 * sizeof(char));
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		ps->arr[i] = 'a'+i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	char* ptr = realloc(ps->arr, 10);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = 'x' ;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//第二种用了两次malloc 容易内存泄漏 连续的内存有利于加快访问速度


//当A=2， B=3时，pointer分配几个字节的空间
//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);//这里是替换 很坑爹 乘法优先级
//9

//int main()
//{
//    unsigned char puc[4];
//    struct tagPIM
//    {
//        unsigned char ucPim1;
//        unsigned char ucData0 : 1;
//        unsigned char ucData1 : 2;
//        unsigned char ucData2 : 3;
//    }*pstPimData;
//    pstPimData = (struct tagPIM*)puc;
//    memset(puc, 0, 4);
//    pstPimData->ucPim1 = 2;
//    pstPimData->ucData0 = 3;
//    pstPimData->ucData1 = 4;
//    pstPimData->ucData2 = 5;
//    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//    return 0;
//}
//00000010 0010101 00000000 00000000

//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}

//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);//3839
//    return 0;
//}

//atoi
//把一个数字字符串转换为整数
#include<limits.h>
#include<ctype.h>
enum State
{
	VALID,
	INVALID
}; state = VALID;
int my_atoi(const char* str)
{
	int flag = 0;
	state = INVALID;
	//空指针
	if (str == NULL)
		return 0;
	if (*str == '\0')
		return 0;
	//空白字符的处理
	while (isspace(*str))
	{
		str++;
	}
	//+-
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	//
	long long  ret = 0;
	while (isdigit(*str))
	{
			ret = ret * 10 + flag*(*str - '0');
			if (ret > INT_MAX || ret < INT_MIN)
			{
				ret = 0;
				return(int) ret;
			}
			str++;
	}
	if (*str == '\0')
	{
		state = VALID;
		return (int)ret;
	}

	return (int)ret;
}
int main()
{
	char* p = "123";
	int ret = my_atoi(p);
	if (state == VALID)
	{
		printf("%d\n", ret);
	}
	return 0;
}