#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//debug���԰汾
//release�����汾���Ż����ģ��ڴ����С�������ٶȶ������ŵ�
//f5�������ԣ�����������һ���ϵ�
//f9������ȡ���ϵ�
//f10����̣�����һ�����̣�ͨ���������û���һ�����
//f11����䣬���뺯���ڲ�����ϸ�ڣ����ã�
// ctrl+f5 ��ʼִ�в�����
//���Ӵ��� �ڴ�  �����  �Ĵ��������ڴ�죩
//���ö�ջ

//void test2()
//{
//	printf("test2()\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//
//int main()//Ҳ�Ǳ������������õ�
//{
//	test();
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		//c,c++�������±겻�����
//		printf("hehe\n");
//	}
//	//���н�� �ҵ�12���0ʱ��i���0��Ȼ��1�ĵ�ַ��arr[12]һ����������ѭ��
//	//ԭ��1.ջ����ʹ��ϰ�ߣ���ʹ�øߵ�ַ�ռ䣬��ʹ�õ͵�ַ�ռ�
//	//     2.���������±����������ַ�ɸߵ��ͱ仯
//	return 0;
//}

//void my_strcpy(char*dest,char* src)
//{
//	while (*src!='\0')
//	{
//		*dest++= *src++;
//		
//		
//	}
//	*dest = *src;//������'\0'
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//���ǲ���0
//	{
//		;
//	}
//	//����'\0'
//}
//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[20] = "xxxxxxxxxx";
//
//	my_strcpy(arr2, arr1);
//
//	printf("%s\n", arr2);
//	return 0;
//}

//assert-���� <assert.h> �������ص����Ⱪ¶������ֹ����ָ��
//��������һ����

//const ���б���
//int main()
//{
//	const int num = 10;
//	int n = 20;
//    int  *  p = &num;//const������� ����*p
//	//const����*����ߣ���ʾָ��ָ������ݣ�*p)����ͨ��ָ�루p�����иı䣬����ָ�����p�����ǿ����޸ĵ�
//	//const����*���ұߣ���ʾָ��ָ������ݣ�*p)����ͨ��ָ�루p�����иı䣬����ָ�����p�����ǲ������޸ĵ�
//	*p = 20;
//
//	printf("%d\n", num);
//
//	return 0;
//}

//ģ��ʵ��strlen��ʵ��
//assert const ����ֵ����ע��

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "adc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
