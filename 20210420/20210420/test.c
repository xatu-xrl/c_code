#include <stdio.h>
//����ָ��
//int main()
//{
//    int a = 10;
//    int arr[10] = { 0 };
//    //��̬�ڴ濪�� �����о����� �ڴ��С�޷��ı�
//    // malloc
//    // free �ỹ������ϵͳ
//    return 0;
//}

//����һ������ָ�룬ָ��ĺ���������int�ββ��ҷ���һ������ָ�룬���ص�ָ��ָ��һ����һ��int�β��ҷ���int�ĺ���
//int (*(*F)(int, int))(int)

//����ָ������

//����һ��ָ����10��Ԫ�ص������ָ�룬����ÿ��Ԫ����һ������ָ�룬�ú����ķ���ֵ��int��������int*
//int (*(*p)[10])(int *)

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1 6
//	return 0;
//}

//���������print_arr������������ĸ�����ȷ�ģ��� c��
//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//print_arr(arr, 3, 5);

//C.void print_arr(int(*arr)[5], int row, int col);
//D.void print_arr(int(*arr)[3], int row, int col);

//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//�ַ�������

void reverse_part(char* str, int start, int end) //���ַ�����start��end��һ������
{
	int i, j;
	char tmp;

	for (i = start, j = end; i < j; i++, j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

void leftRound(char* src, int time)
{
	int len = strlen(src);
	int pos = time % len;
	reverse_part(src, 0, pos - 1); //����ǰ��
	reverse_part(src, pos, len - 1); //������
	reverse_part(src, 0, len - 1); //��������
}