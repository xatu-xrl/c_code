#include<stdio.h>

//��ͺ���

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��
//	int max = MAX(a, b);
//	printf("%d\n", max);
//
//	max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//�ú��ԭ��
//1. ���ڵ��ú����ʹӺ������صĴ�����ܱ�ʵ��ִ�����С�ͼ��㹤������Ҫ��ʱ����ࡣ���Ժ�Ⱥ����ڳ���
//�Ĺ�ģ���ٶȷ����ʤһ�
//2. �����Ĳ�����������Ϊ�ض������͡����Ժ���ֻ�������ͺ��ʵı���ʽ��ʹ�á���֮���������
//�����������Ρ������͡������͵ȿ������� > ���Ƚϵ����͡����������޹ص�

//���ȱ��
//ÿ�ε��ú궼Ҫ���뵽�����У������Ӵ��볤��
//û������
//�������޹أ������Ͻ�
//���ܻ������������ȼ������⣬���׳���

//�Ѻ���ȫ����д ��������Ҫȫ����д

//#undef ȡ������

//�����ж���

//��������

//#define __DEBU__
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__ 
//		printf("%d\n", arr[i]);//Ϊ�˹۲������Ƿ�ֵ�ɹ���
//#endif //__DEBUG__
//	}
//	return 0;
//}


//�ļ�����

//#ifndef __TEST_H__
//#define __TEST_H__
////ͷ�ļ�������
//#endif //__TEST_H__

//offsetof
//#define Offsetof(sn,mn)  (size_t)&(((sn*)0)->mn)  
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//	double d;
//};
//int main()
//{
//	struct S s = { 0 };
//	pirntf("%d\n", Offsetof(struct S, c1));//����һ����ַΪ0
//	return 0;
//}


//feofeof���������ļ���ȡ�������ж��ļ���ȡ������ԭ��ģ��Ƕ�ȡʧ�ܽ��������������ļ�β����