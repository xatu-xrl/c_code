#include<stdio.h>
//文件操作
// 
//二进制输入输出
//struct Stu
//{
//	char name[20];
//	int age;
//	float sccore;
//};
//int main()
//{
//	struct Stu s = { "张三",20,99.5f };
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	//写文件
//	fwrite(&s,sizeof(struct Stu),1,pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件的随机读写

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	fputs("acdef", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "a");
//
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	fputs("abcdef", pf);
//	int ret = fseekfseek(pf, -3, SEEK_CUR);
//
//	fputc('q',pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell返回文件指针相对于起始位置的偏移量

//int main()
//{
//	FILE* pf = fopen("test.txt", "a");
//
//	if (pf == NULL)
//	{
//		return 1;
//	}
//	fputs("abcdef", pf);
//	fseekfseek(pf, -3, SEEK_CUR);
//	int ret = ftell(pf);
//	printf("ret = %d\n", ret);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int ret = fgetc(pf);//读到的是char类型的 为什么要int 因为有可能会读取失败 要返回eof 是-1 所以char放不下

//rewind让文件指针的位置回到文件的起始位置

//文件结束判定
//feof
//在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束
//而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束
//1. 文本文件读取是否结束，判断返回值是否为EOF （fgetc），或者NULL（fgets）
//例如：
//fgetc判断是否为EOF.
//fgets判断返回值是否为NULL.
//2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
//例如：
//fread判断返回值是否小于实际要读的个数

#include<stdlib.h>
int main(void)
{
	int c; // 注意：int，非char，要求处理EOF
	FILE* fp = fopen("test.txt", "r");
	if (!fp) {
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
	{
		putchar(c);
	}
	//判断是什么原因结束的
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");
	fclose(fp);
}