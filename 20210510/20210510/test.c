#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��̬�ڴ溯���Ľ���
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
//		//����û�л���ȥ
//		free(p);
//		p = NULL;//��ֹ�Ƿ����� ���� �ռ仹������
//	}
//	return 0;
//}


//�뺯�� malloc ������ֻ���� calloc ���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0��
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
//	//2�����
//	//�ڵ�һ��ռ�������㹻���Ч�� ���Բ��Ϻ�����Ҫ��
//	//������������Ļ����ڶ���������һ�������Ŀռ䣬������������һ���µ��ڴ��ַ
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

//�����Ķ�̬�ڴ����
//1.�Կ�ָ����н�����

//int main()
//{
//	int* p = (int*)malloc(100);
//	*p = 0;//����ʧ�� �ͶԿ�ָ������˽�����
//    return 0;
//}

//2.�Զ�̬�ڴ�ռ��Խ�����
//int main()
//{
//	int* p= malloc(10 * sizeof(int));
//	if (p = NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	//Խ�����
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

//3.�ԷǶ�̬���ٵ�free

//4.ʹ��free�ͷŶ�̬�ڴ��һ����

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
//	//p�Ѿ�ָ�������������
//	free(p);//�ͻ��������
//	p = NULL;
//	return 0;
//}

//5.��ͬһ���ڴ����ͷ�
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}

//6.��̬�ڴ������ͷţ��ڴ�й©)
//û��free


 
//��������ı�����

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
//	printf(str);//�������  û��free
//}
//int main()
//{
//	Test();
//	return 0;
//}

//2

//char* GetMemory(void)
//{
//	char p[] = "hello world";//��ʱ���� �������������� strʵ���ϻ��Ǹ�Ұָ��
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
//	*p = (char*)malloc(num);//ֻ��û��free
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
//	free(str);//�Ѿ��ͷ��� ǿ�зŽ�ȥ �Ƿ�����  
//	//�ÿվͿ��Խ������
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

//1. ջ����stack������ִ�к���ʱ�������ھֲ������Ĵ洢��Ԫ��������ջ�ϴ���������ִ�н���ʱ��Щ
//�洢��Ԫ�Զ����ͷš�ջ�ڴ�������������ڴ�������ָ��У�Ч�ʺܸߣ����Ƿ�����ڴ�������
//�ޡ� ջ����Ҫ������к���������ľֲ������������������������ݡ����ص�ַ�ȡ�
//2. ������heap����һ���ɳ���Ա�����ͷţ� ������Ա���ͷţ��������ʱ������OS���� �����䷽ʽ����
//������
//3. ���ݶΣ���̬������static�����ȫ�ֱ�������̬���ݡ������������ϵͳ�ͷš�
//4. ����Σ���ź����壨���Ա������ȫ�ֺ������Ķ����ƴ���

//ʵ������ͨ�ľֲ���������ջ������ռ�ģ�ջ�����ص��������洴���ı�����������������١�
//���Ǳ�static���εı�����������ݶΣ���̬���������ݶε��ص��������洴���ı�����ֱ���������������
//�����������ڱ䳤
