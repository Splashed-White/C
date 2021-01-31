//#define  _CRT_SECURE_NO_WARNINGS 1

//stdio —std 标准 i input o output 
//.h —头文件

# define MAX 100

#include<stdio.h>
#include<stdlib.h>

//代码是从main函数的第一行开始执行
//main函数是程序的入口，有且仅有一个

//enum Sex //enum是一个枚举关键字
//{
//	//枚举常量
//	male,
//	female,
//	secret
//};
//int main()
//{
//	printf("%d\n",male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//}
int main()
{
	//100; //字面常量
	int a = MAX;
	printf("%d\n", a);
	//const int a = 10; //const修饰的常变量
	//printf("%d\n",a);//10
	//a = 20; //无法改变a的值
	//printf("%d\n", a);
	return 0;
}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a, &b);
//	int c = a + b;
//	printf("%d\n",c);
//	return 0;
//}

//全局变量——放在大括号外部
//int a = 100;
//int main()
//{
//	//局部变量和全局变量名字冲突时，局部优先
//	int a = 10;//局部变量——放在大括号内部
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//scanf_s是VS特有的函数，如果跨平台使用会报错
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	printf("hello world\n");
//	system("pause");//system是一个执行系统命令的函数—pause
//	return 0;
//}

//运行代码 
//ctrl+f5
//程序执行完直接就结束了，所以没有看到运行结果
//1.设置项目属性
//2.system("pause");
