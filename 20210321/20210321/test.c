#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//int b = a++;//�ȸ�ֵ��������
//	////int b=++a;//���������ٸ�ֵ
//	//printf("a=%d b=%d\n", a, b);
//	printf("%d\n", a++);
//	//10
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	//if (18 <= age <= 40)
//	//�����һ����1�����������
//	if (age>=18&&age<=40)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	//ֻʵ����һ��a�����������Ҫ��0���ұ߲��ÿ���
//	printf("%d %d %d %d\n", a, b, c, d);
//	return 0;
//}
//������ǵ�һ��0
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++&&++b&&d++;
	//ֻʵ����һ��a�����������Ҫ��0���ұ߲��ÿ���
	printf("%d %d %d %d\n", a, b, c, d);
	return 0;
}