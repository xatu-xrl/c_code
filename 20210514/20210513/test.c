#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//��������
//C99 �У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������须��Ա��
//struct S
//{
//	int num;
//	char arr[];//ǰ��������һ����Ա
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//��������������Ĵ�С
//	struct S*p = malloc(sizeof(struct S) + 6);//����������׼����
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
//	struct S* ptr = realloc(p,14);//��arr�ɳ��ɶ�
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
//�������������Ա�Ľṹ��malloc ()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С

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
//�ڶ�����������malloc �����ڴ�й© �������ڴ������ڼӿ�����ٶ�


//��A=2�� B=3ʱ��pointer���伸���ֽڵĿռ�
//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);//�������滻 �ܿӵ� �˷����ȼ�
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
//��һ�������ַ���ת��Ϊ����
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
	//��ָ��
	if (str == NULL)
		return 0;
	if (*str == '\0')
		return 0;
	//�հ��ַ��Ĵ���
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