#include<stdio.h>
//�Զ������ͣ��ṹ�壬ö�٣�����

//�ṹ��
//�ṹ�����͵�����
//�ṹ��������
//�ṹ������Ķ���ͳ�ʼ��
//�ṹ���ڴ����
//�ṹ�崫��
//�ṹ��ʵ��λ�Σ�λ�ε����& ����ֲ�ԣ�

//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1,s2;//ȫ�ֱ���
//int main()
//{
//	struct Stu s = {"xue",20,"��"};
//	return 0;
//}

//�����ṹ������
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;


//typedef struct
//{
//	int data;
//		Node* next;
//}Node;
////����д���룬���з�
////���������
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node//ʡ��struct ������ʱ �����Ը����������

//�ṹ��������
//struct Node
//{
//	int data;
//	struct Node* next;
//};

//�ṹ������Ķ���ͳ�ʼ��
//struct Point
//{
//	int x;
//	int y;
//}p1; 
//
//struct Node
//{
//	struct Point p;
//	struct Node* next;
//};
//int main()
//{
//	struct Point p = {3,5};
//	printf("x=%d y=%d\n", p.x, p.y);
//	struct Node n = { {5,9},NULL };//�ṹ��Ƕ��
//	printf("x=%d y=%d\n", n.p.x, n.p.y);
//	return 0;
//}

//�����ڴ����
//#include<stddef.h>
//struct S
//{
//	char c;//1
//	int i;//4
//};
//
//int main()
//{
//	//struct S s = { 0 };
//	//printf("%d\n",sizeof(s));//8
//	printf("%d\n", offsetof(struct S, c));//��ṹ���Աƫ����  0
//	printf("%d\n", offsetof(struct S, i));//4
//	return 0;
//}

//struct S
//{
//	char c1;//181
//	int i;//484
//	char c2;//181
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}

//1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//VS��Ĭ�ϵ�ֵΪ8
//3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
//4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ���������������������
//�ṹ��������С��������������������Ƕ�׽ṹ��Ķ���������������

//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//printf("%d\n", sizeof(struct S2));//8 С�ķ���һ�� ��ʡ�ռ�

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//printf("%d\n", sizeof(struct S3));//16

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;//0 1-7
//	struct S3 s3;//8  16  8-23
//	double d;//8 24 31
//};
//printf("%d\n", sizeof(struct S4));//

//Ϊʲô�����ڴ���� ?
//1. ƽ̨ԭ��(��ֲԭ��)�� �������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�ĳЩӲ��ƽֻ̨��
//��ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣��
//2. ����ԭ�� ���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣 ԭ�����ڣ�Ϊ�˷���δ�����
//�ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η��ʡ�
//������˵��
//�ṹ����ڴ�������ÿռ�����ȡʱ���������

//�޸�Ĭ�϶�����
//#pragma pack(8)//����Ĭ�϶�����Ϊ8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(1)//����Ĭ�϶�����Ϊ8
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}

//�ṹ�崫��

struct S
{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4}, 1000 };
//�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
//�ṹ���ַ����
void print2(const struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //���ṹ��
	print2(&s); //����ַ
	return 0;
}

//�������ε�ʱ�򣬲�������Ҫѹջ������ʱ��Ϳռ��ϵ�ϵͳ������
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//���ۣ� �ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
