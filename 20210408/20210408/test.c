#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//ָ��
//�ֲ�ָ�����û�г�ʼ��ʱ����������ֵ�����ָ���Ǹ�λ�ò�һ�����ʽ��俴����Ұָ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//short �������ֽ�
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6 12
//	return 0;
//}

//����ָ�������ָ�����ָ��һ�������ռ䣬����֮��Ľṹ��������ָ��֮�����Ԫ�صĸ���
//ָ���д洢���ǵ�ַ����ַ���Կ���һ�����ݣ�����ǿ��ԱȽϴ�С��

//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//дһ����������������һ���ַ��������ݡ�
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", arr);���ܶ��ո�
//	gets(arr);
//	reverse(arr);
//	printf("$s\n", arr);
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��
//2+22+222+2222+22222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//
//	for (i = 0; i < n; i++) 
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//153��1^3��5^3��3^3��
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int tmp = i;
//		int count = 1;
//		while(tmp/=10)
//		{
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//��ӡ����.
int main()
{
	//������
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0;i < line - 1;i++)
	{
		int j = 0;
		for (j=0;j<=i;j++)
		{
			printf(" ");
		}
		for (j = 0; j <(line -1-i)*2-1 ;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}