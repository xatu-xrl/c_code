#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
#include<string.h>
//strncpy
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hel";
//	strncpy(arr1,arr2,5);//������ ʣ��׷��\0
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat
//int main()
//{
//	char arr1[20] = "abcdefxxxxxxxxxxxx";
//	char arr2[] = "qwer";
//	strncat(arr1, arr2, 6);//���治��׷��\0 ����\0�������Ž�ȥ��
//	printf("%s\n", arr1);
//	return 0;
//}
//�ж��ַ����ǲ�����ת����
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	if (strlen(arr1) != strlen(arr2))
//	{
//		printf("no\n");
//		return 0;
//	}
//	//abcdefabcdef ���������еĿ�����
//	//�ڶԱ�����о���
//	strncat(arr1, arr2, 6);
//	char* ret=strstr(arr1,arr2);//�������ַ��� �ҵ���ʼλ�õĵ�ַ
//	if (ret == NULL)
//	{
//		printf("no");
//	}
//	else
//	{
//		printf("yes");
//	}
//	return 0;
//}

//strncmp
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abqdee";
//	int ret = strncmp(arr1, arr2, 5);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char* ret = strstr(arr, "cd");
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//#include<assert.h>
//char* my_strstr(const char*str1,const char*str2)
//{
//	assert(str1);
//	assert(str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = str1;
//	if (*s2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2&& *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return	NULL;
//}
//int main()
//{
//	char* str1 = "abcdef";
//	char* str2 = "cde";
//	char* ret = my_strstr(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}

//strtok
//int main()
//{
//	//192.168.100.24 ���ʮ����
//	//xrl@qq.com �п������������
//	return 0;
//}
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣��ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ��

//strerror
//#include<errno.h>
int main()
{
	//������ÿ⺯������������ʱ����һЩ������
	//����������errno���ȫ�ֱ�����
	
	/*printf("%s\n", strerror(errno));*/
	//�ļ����� ���ļ�
	FILE* pf=fopen("test.txt","r");
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("��ӡ����");
	}
	else
	{
		printf("�򿪳ɹ�\n");
		fclose(pf);
		pf = NULL;
	}
	return 0;
}
