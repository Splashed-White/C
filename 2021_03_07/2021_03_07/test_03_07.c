#define  _CRT_SECURE_NO_WARNINGS 1

/**********结构体内存对齐 - 练习1**************/
//#include<stdio.h>
//#include<stddef.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////offsetof - 计算的是结构体成员相对于结构体起始位置的偏移量
//int main()
//{
//	struct S1 s1;
//	printf("%d\n", sizeof(s1));  //12
//	//结构体再计算大小的时候，会发生对齐
//	printf("%d\n",offsetof(struct S1,c1));  //0
//	printf("%d\n", offsetof(struct S1, i));  //4
//	printf("%d\n", offsetof(struct S1, c2));  //8
//	return 0;
//}

/**********结构体内存对齐 - 练习2**************/
//#include<stdio.h>
//struct S2
//{
//	char c1;	//0
//	char c2;	//1
//	int i;	//4
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S2)); //8
//	return 0;
//}

/**********结构体内存对齐 - 练习3**************/
//#include<stdio.h>
//struct S3
//{
//	double d;    //0
//	char c;    //1
//	int i;    //4
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));  //16
//	return 0;
//}

/**********结构体内存对齐 - 练习4**************/
//#include<stdio.h>
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;  //0 
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n",sizeof(struct S4));   //32
//	return 0;
//}

/**********修改默认对齐数 - 练习1**************/
//#include<stdio.h>
//#pragma pack(1)  //修改默认对齐数位1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()  //恢复默认对齐数
//int main()
//{
//	printf("%d\n",sizeof(struct S1));  //6
//	return 0;
//}

/**********修改默认对齐数 - 练习3**************/
//#include<stdio.h>
//#pragma pack(4)
//struct S3
//{
//	char c;
//	double d;
//	int i;
//};
//#pragma pack()
//int main()
//{
//	printf("%d\n", sizeof(struct S3));    
//	//#pragma  16
//	//         24
//	return 0;
//}

/**********写一个宏，计算结构体总某变量相对于首地址的偏移，并给出说明**************/
//#include<stdio.h>
////模拟实现offsetof
//int main()
//{
//	return 0;
//}

/**********位段**************/
////位段的声明和结构是类似的，有两个不同：
////1.位段的成员必须是 int、unsigned int 或signed int ;
////2.位段的成员名后边有一个冒号和一个数字;
//#include<stdio.h>
//struct A
//{
//	int _a : 2;    //_a只需要2个比特位
//	int _b : 5;    //_b只需要5个比特位
//	int _c : 10;    //_c只需要10个比特位
//	int _d : 30;    //_b只需要30个比特位
//};
///*
//位段 - 二进制
//目的：为了在一定程度上节省空间
//*/
//int main()
//{
//	struct A sa; //
//	//一次开辟一个整型 - 4个字节
//	// 4 - 32个bit位
//	// _a - 2个
//	// _b - 5个
//	// _c - 10个   此时还剩15个bit位
//	//又开辟一个整型 - 4个字节
//	// _d - 30个    C标准未规定是否用前面剩下的字节
//	//总共用了8个字节
//	printf("%d\n",sizeof(struct A));    //8
//	return 0;
//}

/**********位段空间开辟**************/
/*
在当前的VS平台上：
1. 前一个空间剩余的比特位不够时，直接浪费，使用新开辟空间的比特位；
2. 一个字节内部，是从低位到高位使用的；
*/
//#include<stdio.h>
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n",sizeof(struct S));
//	//3
//	//调试窗口监测内存  &s 62 03 04
//	//此时没有用之前剩下的空间，用了新开辟的整型空间
//	return 0;
//}

/**********枚举类型**************/
//#include<stdio.h>
////enum Sex
////{
////	//枚举类型的可能取值
////	MALE,
////	FEMALE,
////	SECRET
////};
//enum RGB
//{
//	RED,
//	GREEN = 5,
//	BLUE
//};
//int main()
//{
//	//enum Sex s = MALE;
//	//enum RGB rgb = GREEN;
//	printf("%d\n", RED);  //0
//	printf("%d\n", GREEN);  //5
//	printf("%d\n", BLUE);  //6
//	return 0;
//}

/**********枚举类型优点**************/
//#include<stdio.h>
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//	//默认0 1 2 3 4
//};
//void menu()
//{
//	printf("************************\n");
//	printf("**** 1.add      2.sub ***\n");
//	printf("**** 3.mul      4.div ****\n");
//	printf("******0.exit*************\n");
//	printf("*************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	do
//	{
//		menu();
//		printf("请选择>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//			//增加代码可读性
//		case ADD:
//			printf("请输入两个操作数>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case SUB:
//			printf("请输入两个操作数>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case MUL:
//			printf("请输入两个操作数>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case DIV:
//			printf("请输入两个操作数>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		defalut:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

/**********联合类型**************/
//#include<stdio.h>
//union Un
//{
//	//c和i会占用同一块空间
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	u.i = 0x11223344;
//	//44 33 22 11
//	u.c = 0x55;
//	printf("%x\n",u.i);  //11223355
//
//	//printf("%d\n",sizeof(u));  //4
//	//printf("%p\n",&u);
//	//printf("%p\n", &(u.c));
//	//printf("%p\n", &(u.i));
//	return 0;
//}

/**********大小端存储**************/
//#include<stdio.h>
//int main()
//{
//	int a = 1; //0x 00 00 00 01 
//	//低                     高
//	//01 00 00 00  - 小端存储
//	//00 00 00 01  - 大端存储
//	if (1 == *(char*)&a) // int*
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	if (1 == *(char*)&a)  //查看a里面的第一个字节存的是1还是0
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;   //u.c就是第一个字节
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}

