#include <stdio.h>
#include<string.h>
//�ַ����ຯ��
//iscntrl �κο����ַ�
//isspace �հ��ַ����ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit ʮ�������� 0~9
//isxdigit ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
//islower Сд��ĸa~z
//isupper ��д��ĸA~Z
//isalpha ��ĸa~z��A~Z
//isalnum ��ĸ�������֣�a~z, A~Z, 0~9
//ispunct �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
//isgraph �κ�ͼ���ַ�
//isprint �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�

//#include<ctype.h>
//int main()
//{
//	char c = '2';
//	int ret = isdigit(c);
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�ת��
//int tolower(int c);
//int toupper(int c);
//#include <ctype.h>
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}

//memcpy  �ڴ濽��
//void* memcpy(void* destination, const void* source, size_t num);
//void* my_memcpy(void*dest,const void*src,size_t count)//unsigned int
//{
//	void* ret = dest;
//	while (count--)
//	{
//		//����һ���ֽ�
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//memmove
//void* my_memmove(void* dest, const void* src,size_t count)
//{
//	if (dest < src)
//	{
//		//ǰ��󿽱�
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)src + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)+count);
//		}
//	}
//}
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	my_memmove(arr1+2,arr1, 16);
//	return 0;
//}

//memcmp
//memset
//int memcmp(const void* ptr1,
//	const void* ptr2,
//	size_t num);

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	memset(arr, 0, 40);
	return 0;
}





















