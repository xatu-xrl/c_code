#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//ָ�����͵�����
//1.ָ����н����ò�����ʱ����һ���Է��ʼ����ֽ�
//2.ָ��Ӽ�������ʱ�򣬾�������ǰ�������һ���ж�󣨾��룩
//int main()
//{
//	int a = 0x11223344;
//	int ch = 'w';
//	int* pa = &a;
//	char* pc = &ch;
//	//32Ϊ��һ��ָ�������С��4���ֽ�
//	//*pa = 0;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//008FFECC
//	printf("%p\n", pa+1);//008FFED0
//
//	printf("%p\n", pc);//008FFECC
//	printf("%p\n", pc+1);//008FFECD
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10;i++)
//	{
//		printf("%d\n",*(pa + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* pa = arr;
//	//char* pa = arr;
//	//01 00 00 00 02 00 00 00
//	//-1�ҵ��ڶ���00
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(pa + i));
//	}
//	return 0;
//}

//short*+1 ����2���ֽ�
//int----- ----4-----
//float--- ----4-----
//double-- ----8-----
//Ұָ��
//1.ָ��û��ʼ��
//2.Խ�����
//3.ָ��ָ��Ŀռ��ͷ�
//int mian()
//{
//	int* p;//��ʱΪҰָ�룬Ĭ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}
//
//
//
//int mian()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)//ѭ��������Խ�����
//	{
//		*p = 0;
//		p++;
//	}
//	return 0;
//}
//
//1.ָ���ʼ��
//2.С��Խ��
//3.�ռ��ͷ� NULL
//4.��ǰ�����Ч��

//1.ָ��Ӽ�����
//2.ָ���ָ��
//3.ָ��Ĺ�ϵ����

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//�õ�����ָ����ָ��֮��ĸ���
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//ָ��-ָ��
//}
//int main()
//{
//	char arr[] = "adc";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//	return 0;
//}

//����ָ��
int main()
{
	int a = 0;
	
	int *pa = &a;

	int** ppa = &pa;

	return 0;
}