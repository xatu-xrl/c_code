#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
//数据在内存中的存储

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);//无符号位加的是0 有符号位加的是符号位
//	return 0;
//}

//unsigned int a = 0x1234; 
//unsigned char b = *(unsigned char*)&a;//大端是

//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;//就是char的范围相加
//    }
//    printf("%d", strlen(a));
//    return 0;
//}

//杨辉三角

//int main()
//{
//	int arr[100][100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j)
//				arr[i][j] = 1;
//			if (j == 0)
//				arr[i][j] = 1;
//			if(i>=2&&j>=1)
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。

//A说：不是我。

//B说：是C。

//C说：是D。

//D说：C在胡说

//已知3个人说了真话，1个人说的是假话。

//int main()
//{
//	int killer = 'a';
//	for (killer = 'a'; killer <= 'd';killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}
//	
//	

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) &&
							((e == 4) + (a == 1) == 1))
						{
							if(a*b*c*d*e==120)
							printf("%d %d %d %d %d",a,b,c,d,e);
						}
					}
				}
			}
		}
	}

	return 0;
}