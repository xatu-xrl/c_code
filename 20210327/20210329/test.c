#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));//������������Ƕ��ű��ʽ
//	return 0;
//}

//ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)//�����������
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	//�ų�����
//	//arr������
//	//���鴫�ε�ʱ������������������ʵ���ϴ�������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);//���ں����������Ԫ�ص�ַ
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()  �����������Ԫ�ص�����
            //int* arr
//void Init(int arr[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr,sz);
//	Print(arr, sz);
//	return 0;
//}
//

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
int main()
{
    int arr1[] = { 1,2,3 };
    int arr2[] = { 4,5,6 };
    int i = 0;
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    for (i = 0; i < sz; i++)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    return 0;
}