#include<stdio.h>
//文件操作
//文件类型
//根据数据的组织形式，数据文件被称为文本文件或者二进制文件。
//数据在内存中以二进制的形式存储，如果不加转换的输出到外存，就是二进制文件。
//如果要求在外存上以ASCII码的形式存储，则需要在存储前转换。以ASCII字符的形式存储的文件就是文本文件

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件的打开与关闭

//int main()
//{
//	FILE* pFile;
//	pFile = fopen("myfile.txt", "w");
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		fclose(pFile);
//	}
//	return 0;
//}

//scanf / fscanf / sscanf
//printf / fprintf / sprintf

//scanf 从控制输入 从文件输入 从指字符输入 从指定字符输入
//格式化字符输出到标准输出 
