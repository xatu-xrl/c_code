#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
//���������������в�ͬλ�ĸ���
//����1
//int get_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0;i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//����2
//int get_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	int tmp = m ^ n;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("%d", count);
//	return 0;
//}

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}

//1.���ʽ��ֵ�ȿ��Ƿ������������������ת�����ٽ��м���
//2.���ʽ���������ʱ���ȿ����ڲ����������ȼ���������˭
//3.���ڲ����������ȼ���ͬ������£����������Ľ���Ծ�������˳��

//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}
//���ʽ(++i)+(++i)+(++i)��ֻ�в����������ȼ��ͽ���ԣ�û��ȷ��Ψһ����·��
//����������ʽ������Ϊ����˳��Ĳ��쵼�½���ǲ�һ�µģ����Ա��ʽ�Ǵ���ı��ʽ��
//������VS��Linux gcc���ԣ���������в��졣

int i;
int main()
{
    i--;//ȫ�ֱ��� Ĭ�ϳ�ʼ��Ϊ0
    if (i > sizeof(i))
    {
        printf(">\n");
    }
    else
    {
        printf("<\n");
    }
    return 0;
}
//sizeof(i)��i���ʹ�С��4��������sizeof�ķ���ֵ����ʵ��Ϊ�޷������Σ���˱��������Զ������i�Զ�ת��Ϊ�޷������ε����ݣ�-1��Ӧ���޷���������һ���ǳ�������֣�����4����8

