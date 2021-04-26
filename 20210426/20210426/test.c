#include <stdio.h>
#include<string.h>
//字符分类函数
//iscntrl 任何控制字符
//isspace 空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
//isdigit 十进制数字 0~9
//isxdigit 十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
//islower 小写字母a~z
//isupper 大写字母A~Z
//isalpha 字母a~z或A~Z
//isalnum 字母或者数字，a~z, A~Z, 0~9
//ispunct 标点符号，任何不属于数字或者字母的图形字符（可打印）
//isgraph 任何图形字符
//isprint 任何可打印字符，包括图形字符和空白字符

//#include<ctype.h>
//int main()
//{
//	char c = '2';
//	int ret = isdigit(c);
//	printf("%d\n", ret);
//	return 0;
//}

//字符转换
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

//memcpy  内存拷贝
//void* memcpy(void* destination, const void* source, size_t num);
//void* my_memcpy(void*dest,const void*src,size_t count)//unsigned int
//{
//	void* ret = dest;
//	while (count--)
//	{
//		//拷贝一个字节
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
//		//前向后拷贝
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





















