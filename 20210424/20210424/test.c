#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
#include<string.h>
//strncpy
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "hel";
//	strncpy(arr1,arr2,5);//不够了 剩下追加\0
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat
//int main()
//{
//	char arr1[20] = "abcdefxxxxxxxxxxxx";
//	char arr2[] = "qwer";
//	strncat(arr1, arr2, 6);//后面不回追加\0 最后的\0是主动放进去的
//	printf("%s\n", arr1);
//	return 0;
//}
//判断字符串是不是旋转得来
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefab";
//	if (strlen(arr1) != strlen(arr2))
//	{
//		printf("no\n");
//		return 0;
//	}
//	//abcdefabcdef 包含了所有的可能性
//	//在对比如果有就是
//	strncat(arr1, arr2, 6);
//	char* ret=strstr(arr1,arr2);//查找子字符串 找到起始位置的地址
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
//	//192.168.100.24 点分十进制
//	//xrl@qq.com 切开就用这个函数
//	return 0;
//}
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回 NULL 指针

//strerror
//#include<errno.h>
int main()
{
	//当你调用库函数，发生错误时，有一些错误码
	//错误码会放在errno这个全局变量中
	
	/*printf("%s\n", strerror(errno));*/
	//文件操作 打开文件
	FILE* pf=fopen("test.txt","r");
	if (pf == NULL)
	{
		//printf("%s\n", strerror(errno));
		perror("打印错误");
	}
	else
	{
		printf("打开成功\n");
		fclose(pf);
		pf = NULL;
	}
	return 0;
}
