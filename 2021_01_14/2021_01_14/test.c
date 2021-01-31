#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*******************signed关键字**************************/
//int main()
//{
//	//自动创建-销毁
//	auto int a = 10; //局部变量/自动变量 auto可以省略
//	signed int age1; //默认是有符号的
//	unsigned int age2;
//	return 0;
//
//}
/*******************typedef关键字**************************/
//typedef unsigned int unit;
//int main()
//{
//	unsigned int a = 10;
//	unit b = 1;
//
//	return 0;
//}

//statci  -静态的
//可以修饰局部变量、全局变量、函数
/*******************static修饰局部变量**************************/
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1; 
//	//static的作用使a的作用域延长到了整个项目结束，所以下次调用test函数时之前a的值还存在
//	a++;
//	printf("%d\n",a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

/*******************static修全局变量**************************/