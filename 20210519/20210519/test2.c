#include<stdio.h>
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int pos = 0;
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//����ret��һλΪ1 ��˵��5��6��һ��
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//			break;
//	}
//	pos = i;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >> pos & 1 == 1)
//		{
//			num1 ^= arr[i];
//		}
//	}
//	num2 = ret ^ num1;
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a + b > c && b + c > a && c + a > b)
		{
			if (a == b && b == c)
				printf("����������\n");
			else if ((a == b) && a != c || (a == c && a != b) || (b == c) & b != a)
				printf("�ȱ�������\n");
			else
				printf("��ͨ������");

		}
		else
			printf("����������\n");
	}
	return 0;
}