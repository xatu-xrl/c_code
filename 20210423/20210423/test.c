#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
#include<string.h>

//�ַ��������ַ�������

//strlen ���ַ�������

//�ַ����Ѿ� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ������������� '\0' )��
//����ָ����ַ�������Ҫ�� '\0' ������
//ע�⺯���ķ���ֵΪsize_t�����޷��ŵ�
//size_t ����unsigned int
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1) > 0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");//�����������޷�������
//	}
//	return 0;
//}
//ģ��ʵ��strlen
//��1
//size_t my_strlen(const char* str)
//{
//	int count = 0;//������
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//��2
//size_t my_strlen(const char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//��3
//size_t my_strlen(const char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//strcpy
//Դ�ַ��������� '\0' ����
//Ŀ��ռ����ɱ� Ҳ�ù���
//void my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)//���ƺ�\0˳��������ȥ
//	{
//		;
//	}
//	return ret;
//}
////Ϊ��ʵ����ʽ���� Ҫchar*���͵ķ���ֵ ��һ�������ķ���ֵ������һ�������Ĳ���������ʽ����
//int main()
//{
//	char* str1 = "abcdef";
//	char arr[20] = "xxxxxxxxxxxxxxxxxxx";
//
//	printf("%s\n", arr);
//	return 0;
//}

//strcat �ַ���׷��
//char* strcat(char* destination, const char* source);
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ���������
//Դ�ַ��������� '\0' ����
//Ŀ��ռ������޸�.
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//��Ŀ�ĵ�'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//��������
//	while (*dest++=*src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	my_strcat(arr1, "world");
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	strcat(arr1, arr1);//���Լ���\0 ͣ������
//	return 0;
//}
//���뾲̬��
//#pragma comment(lib,"my_strcat.lib");

//strcmp
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//int my_strcmp(const char* s1, const char* s2)
//{
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	int ret = my_strcmp("abcw", "adcdef");
//	printf("%d\n", ret);
//	return 0;
//}

