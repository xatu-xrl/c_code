#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

//���������ڴ��еĴ洢
// 5.5
// 101.1
// ��ʾ2��-1�η�
//(-1)^s*1.011*2^2 s=0Ϊ���� mֻ�洢С�������� ���油1
//(-1)s^M*2^E
//s1bit e8��bit  m23bit
int main()
{
	float f = 5.5f;//��дfĬ����double����
	//(-1) ^ 0 * 1.011 * 2 ^ 2     e+127 ��ΪҪ��ʾ����double-1023
	//ȫ0 -126 Ҳ����1 һ���ܽӽ�0��С��
	//ȫ1 ��Ч����ȫΪ0
	return 0;
}

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;//ǿ������ת��
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//���εķ�ʽ�Ž�ȥ�������˸ı䣬˵���洢��ʽ��һ��
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}

//����
//unsigned char i = 0;
////�޷��� 0->255
//int main()
//{
//	for (i = 0; i <= 255; i++)//��Ϊ��
//	{
//		printf("hello word\n");//��ѭ��
//	}
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;//-1 -2 -3...-128 127 126... 0
//	}
//	printf("%d", strlen(a));//'\0'ASCIIֵΪ0
//	return 0;
//}


//int main()
//{
//	unsigned int i;//>=0
//	for (i = 9; i >= 0; i--)//�ж�������Ϊ�棬��ѭ��
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//
