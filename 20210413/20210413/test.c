#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//ָ��Ľ���

//1.�ַ�ָ��

//int main()
//{
//
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%c\n", &pc);
//
//	char* p = "adcdef";//�ַ����г�������Ҫ�޸�������
//	printf("%s\n",p);//p�����a�ĵ�ַ
//	
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//		printf("arr1 = arr2\n");
//	else
//		printf("arr1 != arr2\n");
//
//	if (p1 == p2)
//		printf("p1 == p2\n");
//	else
//		printf("p1 != p2\n");
//
//	return 0;
//}

//2.ָ������

//int* arr1[10]; //����ָ�������
//char* arr2[4]; //һ���ַ�ָ�������
//char** arr3[5];//�����ַ�ָ�������

//3.����ָ��

//int main()
//{
//	/*char arr[5];
//	char (*pa)[5]=&arr;*/
//
//	char* ch[5];
//	char* (*pc)[5] = &ch;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//����ָ�� = ����ĵ�ַ
//	int(*p)[10]=&arr;//�õ�����ĵ�ַ
//	return 0;
//}
//p�Ⱥ�*��ϣ�˵��p��һ��ָ�������Ȼ��ָ��ָ�����һ����СΪ10�����͵����顣����p��һ��

//����Ҫע�⣺[]�����ȼ�Ҫ����*�ŵģ����Ա�����ϣ�������֤p�Ⱥ�*��ϡ�

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*arr;
//	&arr;*/
//	printf("%p", arr);//��Ԫ�ص�ַ
//	printf("%p", &arr);//�����ַ
//	printf("%p", arr[0]);
//	//��ֵַ��һ����
//	printf("arr+1 = %p\n", arr + 1);//40�� ����һ������
//	printf("&arr+1= %p\n", &arr + 1);//4��
//}

//����ָ���ʹ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p1 + i));
//	}
//	return 0;
//}

//ָ�����飬һ�㳣���ڶ�ά����

//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	print_arr1(arr, 3, 5);
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5);
//	return 0;
//}

//int arr[5];
//int* parr1[10];//parr1��һ�����飬������ʮ��Ԫ�أ�ÿ��Ԫ��������int*
//int(*parr2)[10];//parr2��һ��ָ�룬ָ�����飬��ʮ��Ԫ�أ�ÿ��Ԫ��������int
//int(*parr3[10])[5];//parr3��һ�����飬�����Ǹ�ָ�룬ָ��һ����СΪ5�����飬Ԫ����int

//4.���鴫�κ�ָ�봫��

//һά���鴫��

//void test(int arr[])//1
//{}
//void test(int arr[10])//2
//{}
//void test(int* arr)//3
//{}
//void test2(int* arr[20])//4
//{}
//void test2(int** arr)//5
//{}
//int main()
//{
//	int arr[10] = { 0 };//1 2 3����
//	int* arr2[20] = { 0 };//45����
//	test(arr);
//	test2(arr2);
//}

//��ά����Ĵ���

//void test(int arr[3][5])//1
//{}
//void test(int arr[][])//2
//{}
//void test(int arr[][5])//3
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//void test(int *arr)//4
//{}
//void test(int* arr[5])//5
//{}
//void test(int (*arr)[5])//6
//{}
//void test(int **arr)//7
//{}
//int main()
//{
// int arr[3][5] = {0};
// test(arr);//1 3 6���� 2 4 5 7������
//}

//һ��ָ�봫��

//void print(int* p, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}
//int* p1 ,p2 ǰ��ָ�� ��������

//����ָ������

//void test(int** ptr) 
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

void test(char** p) {

}
int main()
{
	char c = 'b';
	char* pc = &c;
	char** ppc = &pc;
	char* arr[10];
	test(&pc);
	test(ppc);
	test(arr);//Ok?
	return 0;
}