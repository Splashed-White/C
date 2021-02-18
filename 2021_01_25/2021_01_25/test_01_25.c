#define  _CRT_SECURE_NO_WARNINGS 1

/*****************算数操作符****************************/
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 7 / 2); 
//	printf("%f\n",7.0/2);
//	printf("%d\n", 7 % 2); 
//	return 0;
//}
/*****************移位操作符****************************/
//左移位操作符 << 
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//右移位操作符 >>
//#include<stdio.h>
//int main()
//{
//	int a = -5;
//	int b = a >> 1;  //算数右移
//	printf("%d\n", b);  //b = -3
//	return 0;
//}

/*****************位操作符****************************/
//不能创建临时变量,实现两个数的交换
//方法一：相加，但可能会整型溢出
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n",a, b);
//	return 0;
//}
//方法二：异或,但程序可读性差，效率低
//#include<stdio.h>
//int main()
//{
//	int a = 3;   //011
//	int b = 5;   //101
//	a = a^b;     //110
//	b = a^b;     //011
//	a = a^b;     //101
//	printf("a = %d b = %d\n",a, b);
//	return 0;
//}

/**************求一个整数存储在内存中的二进制中1的个数********************/
//方法一：利用% /
//#include<stdio.h>
//int main()
//{
//	int num = 5;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//方法二：按位与
//#include<stdio.h>
//int main()
//{
//	int num = 5;
//	int i = 0, count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

/*****************sizeof和数组****************************/
#include<stdio.h>

int main()
{
	int a = 10;
	printf("%d\n",sizeof(a));  //4
	printf("%d\n", sizeof(int));   //4

	int arr1[10] = { 0 };
	printf("%d\n", sizeof(arr1));  //40
	printf("%d\n", sizeof(int[10]));  //40

	int arr2[5] = { 0 };
	printf("%d\n", sizeof(arr2));  //20
	printf("%d\n", sizeof(int[5]));  //20

	short s = 3;
	int a = 4;
	printf("%d\n",sizeof(s = a + 4));   //2
	//sizeof括号中放的表达式是不计算的
	return 0;
}












	///*整数的二进制有三种表示：原码，反码，补码
	//正整数的原码，反码，补码相同

	//int a = -1;
	//1000 0000 0000 0000 0000 0000 0000 0001 原码
	//负数原码的符号位不变，其他位按位取反得到的就是反码
	//1111 1111 1111 1111 1111 1111 1111 1110 反码
	//反码+1，得到的就是补码
	//1111 1111 1111 1111 1111 1111 1111 1111 补码
	//负整数的

//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 3;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d\n:", a, b);
//	return 0;
//}
