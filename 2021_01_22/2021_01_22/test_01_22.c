#define  _CRT_SECURE_NO_WARNINGS 1
/*********************函数嵌套调用**************************/
//函数不能嵌套定义
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
/*********************函数链式访问**************************/
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	/*
//	int len = strlen("abcdef"); 
//	printf("%d\n",len);
//	*/
//	printf("%d\n", strlen("abcdef"));//把一个函数的返回值作为另一个函数的参数
//	return 0;
//}
/*********************练习链式访问**************************/
//#include<stdio.h>
//
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	//printf()返回类型int,返回值是打印的字符的个数
//	//print:4321
//	return 0;
//}
/*********************函数声明与定义**************************/
//当函数定义放在main函数之后时，需要先声明函数
//#include<stdio.h>
//int add(int x, int y);//先函数声明
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n",sum);
//	return 0;
//}
//int add(int x, int y)//函数定义
//{
//	return x + y;
//}

/*********************工程使用——头文件**************************/
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

/*********************有一个无符号整数，按照顺序打印它的每一位。如:输入:1234,输出1234**************************/
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
/*********************栈溢出**************************/
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
//递归层次太深了，导致栈溢出
/*********************编写函数不允许使用临时变量求字符串长度**************************/
//#include<stdio.h>
//方式一：计数器方式
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;//str是地址
//	}
//	return count;
//}
//方式二：递归实现
//int my_strlen(char* str)//此函式中没有创建临时变量
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
//	//数组名是首元素的地址——char*
//	printf("%d\n",len);
//	return 0;
//}

//编译器可能提供了库函数的参考代码 目录文件查找

/*********************递推公式求阶乘**************************/
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

/*********************递推公式求n个斐波那契数**************************/
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

/*********************汉诺塔问题**************************/
/*********************青蛙跳台阶问题**********************/

/**********************数组创建**************************/
//#include<stdio.h>
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//char ch[5 + 5] = { 0 };
//	int arr1[10] = { 1 };//不完全初始化
//	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//完全初始化
//	int arr3[] = { 0 };
//	char arr4[] = "abc";//4个元素\0
//	char arr5[] = { 'a', 'b', 'c' };//3个元素
//	return 0;
//}

/**********************数组存储**************************/
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);//%p打印地址
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
//随着下标的增长，地址是由低到高增长的