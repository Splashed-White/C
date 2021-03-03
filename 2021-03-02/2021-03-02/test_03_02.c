#define  _CRT_SECURE_NO_WARNINGS 1
/****************************/
//#include<stdio.h>
//int main()
//{
//	return 0;
//}

/***********指针复习*****************/
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	int* pc = &a;
//	printf("%p\n", a);
//
//	printf("%p\n",pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}
/*
11223344
012FF868
012FF86C
012FF868
012FF86C
*/

/************自定义类型——结构体****************/
//#include<stdio.h>
//struct Book
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计", "谭浩强", 55 };
//	printf("%s %s %d\n", b1.name, b1.author, b1.price);
//	return 0;
//}

/************typedef****************/
//#include<stdio.h>
//typedef struct Book
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	short price;
//}Book; //类型名
//int main()
//{
//	Book b1 = { "C语言程序设计", "谭浩强", 55 };
//	printf("%s %s %d\n", b1.name, b1.author, b1.price);
//	return 0;
//}

/***********匿名结构体类型****************/
//#include<stdio.h>
//struct
//{
//	char name[20];
//	char author[20];
//	short price;
//}s;
////匿名结构体类型 只能用一次
//int main()
//{
//	return 0;
//}

/***********结构体嵌套****************/
#include<stdio.h>
struct S
{
	int a;
	int b;
	double d;
};
struct B
{
	char c;
	struct S s;
	short ss;
};
int main()
{
	struct B b = { 'a', { 10, 20, 3.14 }, 5 };
	printf("%lf\n",b.s.d);
	return 0;
}
