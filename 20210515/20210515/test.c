#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1
//int cnt = 0;
//int fib(int n) {
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//} 
//void main()
//{
//	fib(8);
//	printf("%d", cnt);//67
//}

//2
//int x = 1;
//do {
//	printf("%2d\n", x++);//死循环1 打印两个数字
//} while (x--);

//3
void reverse(char* start, char* end)
{
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int main()
{
	char input[100];
	// 注意不能使用scanf，scanf遇到空格，一次输入接收就结束了
	gets(input);
	// 翻转整个句子
	reverse(input, input + strlen(input) - 1);
	// 翻转单词
	char* start = input;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end)
			end++;
		reverse(start, end - 1);
		if (*end)
			start = end + 1;
		else
			start = end;
	} 
		printf("%s", input);
	return 0;
}