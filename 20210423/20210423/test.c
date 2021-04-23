#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
#include<string.h>

//字符函数和字符串函数

//strlen 求字符串长度

//字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。
//参数指向的字符串必须要以 '\0' 结束。
//注意函数的返回值为size_t，是无符号的
//size_t 就是unsigned int
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
//		printf("srt1>str2\n");//返回类型是无符号整数
//	}
//	return 0;
//}
//模拟实现strlen
//法1
//size_t my_strlen(const char* str)
//{
//	int count = 0;//计数器
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//法2
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
//法3
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
//源字符串必须以 '\0' 结束
//目标空间必须可变 也得够大
//void my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++)//改善后\0顺利拷贝过去
//	{
//		;
//	}
//	return ret;
//}
////为了实现链式访问 要char*类型的返回值 把一个函数的返回值当成另一个函数的参数就是链式访问
//int main()
//{
//	char* str1 = "abcdef";
//	char arr[20] = "xxxxxxxxxxxxxxxxxxx";
//
//	printf("%s\n", arr);
//	return 0;
//}

//strcat 字符串追加
//char* strcat(char* destination, const char* source);
//目标空间必须有足够的大，能容纳下源字符串的内容
//源字符串必须以 '\0' 结束
//目标空间必须可修改.
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	//找目的地'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//拷贝数据
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
//	strcat(arr1, arr1);//把自己的\0 停不下来
//	return 0;
//}
//导入静态库
//#pragma comment(lib,"my_strcat.lib");

//strcmp
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
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

