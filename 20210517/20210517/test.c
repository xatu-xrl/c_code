#include<stdio.h>
//�ļ�����
// 
//�������������
//struct Stu
//{
//	char name[20];
//	int age;
//	float sccore;
//};
//int main()
//{
//	struct Stu s = { "����",20,99.5f };
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		perror("open file for writting");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s,sizeof(struct Stu),1,pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ļ��������д

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

//ftell�����ļ�ָ���������ʼλ�õ�ƫ����

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

//int ret = fgetc(pf);//��������char���͵� ΪʲôҪint ��Ϊ�п��ܻ��ȡʧ�� Ҫ����eof ��-1 ����char�Ų���

//rewind���ļ�ָ���λ�ûص��ļ�����ʼλ��

//�ļ������ж�
//feof
//���ļ���ȡ�����У�������feof�����ķ���ֱֵ�������ж��ļ����Ƿ����
//����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β����
//1. �ı��ļ���ȡ�Ƿ�������жϷ���ֵ�Ƿ�ΪEOF ��fgetc��������NULL��fgets��
//���磺
//fgetc�ж��Ƿ�ΪEOF.
//fgets�жϷ���ֵ�Ƿ�ΪNULL.
//2. �������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
//���磺
//fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���

#include<stdlib.h>
int main(void)
{
	int c; // ע�⣺int����char��Ҫ����EOF
	FILE* fp = fopen("test.txt", "r");
	if (!fp) {
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
	{
		putchar(c);
	}
	//�ж���ʲôԭ�������
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");
	fclose(fp);
}