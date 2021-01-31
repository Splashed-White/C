#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n",a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;   //a 1 2 3  4  5  6  7  8
//		if (b % 3 == 1)       //b 4 7 10 13 16 19 22
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
/****************写代码将三个数按从大到小输出********************************/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int x = a;
//		a = b;
//		b = x;
//	}
//	if (a < c)
//	{
//		int x = a;
//		a = c;
//		c = x;
//	}
//	if (b < c)
//	{
//		int x = b;
//		b = c;
//		c = x;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
/****************写一个代码打印1-100之间所有3的倍数的数字********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}
/****************给定两个数，求这两个数的最大公约数********************************/
//#include<stdio.h>
////辗转相除法
////用较大的数除以较小的数，能除尽，公约数就是较小的数；除不尽就用较小的数不断除上一次运算的余数，直到余数为0，此时公约数为上一次运算的余数
//int main()
//{
//	int a, b;
//	int temp;
//	scanf("%d%d",&a,&b);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}//a是较大的数，b是较小的数
//	if (a % b == 0)
//		printf("最大公约数为%d\n",b);
//	while (a % b != 0)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("最大公约数为%d\n", b);
//	return 0;
//}
/****************打印1000年到2000年之间的闰年********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//判断闰年：
//		//能被4整除不能被100整除；能被400整除
//		if ((i% 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d是闰年\n",i);
//		}
//		else
//			printf("%d不是闰年\n", i);
//	}
//	return 0;
//}
/****************打印100~200之间的素数********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 2;
//	int a = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		a = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				a = 0;
//		}
//		if (a == 1)
//			printf("%d是素数\n",i);
//	}
//	return 0;
//}
/****************1到100的所有整数中出现多少个数字9********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//符合条件的：个位9/十位9个十位都是9
//		if (i % 10 == 9 || i / 10 == 9)
//			sum++;
//	}
//	printf("1到100的所有整数中出现数字9的个数为：%d\n",sum);
//	return 0;
//}
/****************计算1/1-1/2+1/3-1/4+1/5……+1/99-1/100的值********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
/****************求10个整数中最大值********************************/
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("请输入10个整数\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("10个整数中最大值为：%d\n", max);
//	return 0;
//}

/****************在屏幕上输出9*9乘法口诀表********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/****************二分查找********************************/
//要求在一个整形有序数组中查找具体的某个数
//找到了就打印数字所在的下标，找不到则输出：找不到
#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k,mid;
	scanf("%d",&k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left > right)
	{
		printf("找不到该元素\n");
	}
	else
	{
		printf("找到元素，下标是：%d\n", mid);
	}

	return 0;
}
