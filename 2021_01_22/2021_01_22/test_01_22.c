#define  _CRT_SECURE_NO_WARNINGS 1
/*********************����Ƕ�׵���**************************/
//��������Ƕ�׶���
//#include<stdio.h>
//void newline()
//{
//	printf("hehehe\n");
//}
//void threeline()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		newline();
//	}
//}
//int main()
//{
//	threeline();
//	return 0;
//}
/*********************������ʽ����**************************/
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	/*
//	int len = strlen("abcdef"); 
//	printf("%d\n",len);
//	*/
//	printf("%d\n", strlen("abcdef"));//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//	return 0;
//}
/*********************��ϰ��ʽ����**************************/
//#include<stdio.h>
//
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	//printf()��������int,����ֵ�Ǵ�ӡ���ַ��ĸ���
//	//print:4321
//	return 0;
//}
/*********************���������붨��**************************/
//�������������main����֮��ʱ����Ҫ����������
//#include<stdio.h>
//int add(int x, int y);//�Ⱥ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n",sum);
//	return 0;
//}
//int add(int x, int y)//��������
//{
//	return x + y;
//}

/*********************����ʹ�á���ͷ�ļ�**************************/
//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

/*********************��һ���޷�������������˳���ӡ����ÿһλ����:����:1234,���1234**************************/
//#include<stdio.h>
//void print(int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);//123
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	print(num);
//	//print(1234)
//	//print(123)  4
//	//print(12)   3
//	//print(1)    2
//	// 1 2 3 4 
//	return 0;
//}
/*********************ջ���**************************/
//#include<stdio.h>
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//�ݹ���̫���ˣ�����ջ���
/*********************��д����������ʹ����ʱ�������ַ�������**************************/
//#include<stdio.h>
//��ʽһ����������ʽ
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;//str�ǵ�ַ
//	}
//	return count;
//}
//��ʽ�����ݹ�ʵ��
//int my_strlen(char* str)//�˺�ʽ��û�д�����ʱ����
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	//����������Ԫ�صĵ�ַ����char*
//	printf("%d\n",len);
//	return 0;
//}

//�����������ṩ�˿⺯���Ĳο����� Ŀ¼�ļ�����

/*********************���ƹ�ʽ��׳�**************************/
//#include<stdio.h>
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fac(n);
//	printf("%d ",ret);
//	return 0;
//}

/*********************���ƹ�ʽ��n��쳲�������**************************/
//#include<stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count ++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	printf("%d\n",count);
//	return 0;
//}

/*********************��ŵ������**************************/
/*********************������̨������**********************/

/**********************���鴴��**************************/
//#include<stdio.h>
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//char ch[5 + 5] = { 0 };
//	int arr1[10] = { 1 };//����ȫ��ʼ��
//	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//��ȫ��ʼ��
//	int arr3[] = { 0 };
//	char arr4[] = "abc";//4��Ԫ��\0
//	char arr5[] = { 'a', 'b', 'c' };//3��Ԫ��
//	return 0;
//}

/**********************����洢**************************/
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);//%p��ӡ��ַ
//	}
//	return 0;
//}
/*
&arr[0] = 010FFC38
&arr[1] = 010FFC3C
&arr[2] = 010FFC40
&arr[3] = 010FFC44
&arr[4] = 010FFC48
&arr[5] = 010FFC4C
&arr[6] = 010FFC50
&arr[7] = 010FFC54
&arr[8] = 010FFC58
&arr[9] = 010FFC5C
*/
//�����±����������ַ���ɵ͵���������