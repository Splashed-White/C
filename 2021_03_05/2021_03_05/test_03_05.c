#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	fib(8);
//	printf("%d\n",cnt);
//	return 0;
//}
// cnt = 67

/******************����С������**********************/
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d",&a,&b);
//	//min���趨����С������
//	int min = a > b ? a : b;
//	while (min%a != 0 || min%b != 0)
//	{
//		min++;
//	}
//	printf("%d\n",min);
//	return 0;
//}

/*  a��b�����Լ��Ϊc����С������ = a * b /c  */
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d",&a,&b);
//	int i = 1;
//	//min
//	while (a * i % b!= 0)
//	{
//		i++;
//	}
//	printf("%d\n",a * i);
//	return 0;
//}

/****************��һ�仰�еĵ������嵹�ã������Ų���***********************/
/* 
    I like apple.
	apple. like I
*/
/*
	�����ַ�������  .elppa ekil I
	�ַ����е�ÿ���������� apple. like I
*/
#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*left = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	//1.���������ַ���
	reverse(arr,arr + len - 1);
	//2.����ÿһ������
	char* start = arr;
	char* end = arr;

	while (*end)
	{
		end = start;
		wile(*end != ' ')
		{
			end++; //end�ǿո�ĵ�ַ
		}
		reverse(start, end);
		start = end + 1;
	}

	printf("%s\n",arr);
	return 0;
}