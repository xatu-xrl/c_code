#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>






//��һ�������洢���ڴ��еĶ�������1�ĸ���
//6
//000000000000000000000000110
//1.�����������������
//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 6;
//	int ret = count_one(a);
//	printf("%d\n", ret);
//	return 0;
//}

//����2 ��ÿһλ��1��λ��ȷ����û��һ ѭ��32��
//int count_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ( ( (n >> i) & 1 )== 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int ret = count_one(a);
//	printf("%d\n", ret);
//	return 0;
//}

//������
//n=n&(n-1)ÿһ�������ұߵ�1��ʧ
//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = -1;
//	int ret = count_one(a);
//	printf("%d\n", ret);
//	return 0;
//}
//���������������ܴ�����ʱ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf(" a = %d b = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&b;//��λ��
//	//011����1��1
//	//101
//	//001
//	int d = a | b;//��λ����0����0
//	int e = a^b;//��λ��� ��һ����1һ����0
//	return 0;1
//}
//��λ������
//>>
//<<
//int main()
//{
//	//
//	int a = -1;
//	//10000000000000000000000000000001ԭ��
//	//11111111111111111111111111111110����
//	//11111111111111111111111111111111����
//	//���ڴ��д���ǲ���
//	int b = a >> 1;
//	//1.�������ƣ��ұ߶�������߲��Ϸ���λ�����λ����λ������0��
//	//2.�߼����ƣ��ұ߶�������߲���
//	printf("b=%d\n", b);
//	//���������õ�����������
//	return 0;
//}
//int main()
//{
//	int a = 7;
//	//a >> 1;
//	int b = a << 1;
//	printf("b=%d\n",b);
//	//���Ʋ������ƶ����Ƕ�����λ
//	//����������ұ߲���
//	//4���ֽڣ�8��bitλ��32
//	return 0;
//}

//int main()
//{
//	int a = 7 / 2;
//	printf("a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	double a = 7 / 2.0;
//	printf("a=%lf\n", a);
//	return 0;
//}
