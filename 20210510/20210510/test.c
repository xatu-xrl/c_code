#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//动态内存函数的介绍
//malloc
//free
//calloc
//realloc

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 25; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 25; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//申请没有还回去
//		free(p);
//		p = NULL;//防止非法访问 回收 空间还给堆区
//	}
//	return 0;
//}


//与函数 malloc 的区别只在于 calloc 会在返回地址之前把申请的空间的每个字节初始化为全0。
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	int*ptr = (int*)realloc(p,20*sizeof(int));
//	//2种情况
//	//在第一块空间后面有足够大的效果 可以补上后面需要的
//	//后面如果不够的话，在堆区重新找一块连续的空间，这样函数返回一个新的内存地址
//	if (ptr != NULL)
//	{
//		perror("realloc");
//	}
//	else
//	{
//		p = ptr;
//	}
//	for (i = 10; i < 20; i++)
//	{
//		p[i] = i + 1;
//	}
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//常见的动态内存错误
//1.对空指针进行解引用

//int main()
//{
//	int* p = (int*)malloc(100);
//	*p = 0;//假如失败 就对空指针进行了解引用
//    return 0;
//}

//2.对动态内存空间的越界访问
//int main()
//{
//	int* p= malloc(10 * sizeof(int));
//	if (p = NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	//越界访问
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3.对非动态开辟的free

//4.使用free释放动态内存的一部分

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p = NULL)
//	{
//		perror("malloc");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	//p已经指向第六个整形了
//	free(p);//就会出现问题
//	p = NULL;
//	return 0;
//}

//5.对同一快内存多次释放
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}

//6.动态内存忘记释放（内存泄漏)
//没有free


 
//几个经典的笔试题

//1

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);//程序崩溃  没有free
//}
//int main()
//{
//	Test();
//	return 0;
//}

//2

//char* GetMemory(void)
//{
//	char p[] = "hello world";//临时数组 出函数就销毁了 str实际上还是个野指针
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//3
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);//只有没有free
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//已经释放了 强行放进去 非法访问  
//	//置空就可以解决问题
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//1. 栈区（stack）：在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时这些
//存储单元自动被释放。栈内存分配运算内置于处理器的指令集中，效率很高，但是分配的内存容量有
//限。 栈区主要存放运行函数而分配的局部变量、函数参数、返回数据、返回地址等。
//2. 堆区（heap）：一般由程序员分配释放， 若程序员不释放，程序结束时可能由OS回收 。分配方式类似
//于链表。
//3. 数据段（静态区）（static）存放全局变量、静态数据。程序结束后由系统释放。
//4. 代码段：存放函数体（类成员函数和全局函数）的二进制代码

//实际上普通的局部变量是在栈区分配空间的，栈区的特点是在上面创建的变量出了作用域就销毁。
//但是被static修饰的变量存放在数据段（静态区），数据段的特点是在上面创建的变量，直到程序结束才销毁
//所以生命周期变长
