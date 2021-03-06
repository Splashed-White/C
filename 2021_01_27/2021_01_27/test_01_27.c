#define  _CRT_SECURE_NO_WARNINGS 1

/*************************************/
//#include<stdio.h>
//int main()
//{
//	return 0;
//}

/**************指针概念***********************/
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a; //指针变量
//	*p = 20;
//	return 0;
//}

/***************指针类型**********************/
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	//如果p是整形指针，解引用访问了4个字节
//	//int* p = &a;
//	//*p = 0;
//	//如果p是字符指针，解引用访问了1个字节
//	char* p = &a;
//	*p = 0;
//	//指针类型的第一个作用：决定了指针的访问权限，也就是能访问几个字节
//	//指针变量一般类型匹配，访问的字节不多不少
//	return 0;
//}


/***************指针类型意义**********************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr; //数组名-首元素地址
//	char* pc = arr;
//	printf("%p\n", arr);
//	printf("%p\n",pa);
//	printf("%p\n", pa + 1);
//	printf("---------------------\n");
//	printf("%p\n",pc);
//	printf("%p\n", pc + 1);
//
//	//指针类型的第二个作用：指针类型决定了指针+1，走多大的距离
//	return 0;
//}

/****************指针类型意义*********************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

/****************指针类型意义*********************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//我希望把arr这10个整型的空间，看作40个字节的空间
//	//给每个字节放一个字符进去
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 'x';
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

/**************野指针***********************/
//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//野狗  -
//	//野指针  -
//	//p得到的地址之后，地址指向空间已经释放了，所以这个时候的p是野指针
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n",*p);
//	return 0;
//}

/****************野指针-指针未初始化*********************/
//#include<stdio.h>
//int main()
//{
//	int* p; //没有任何初始化 - 随机值
//	*p = 20;
//	return 0;
//}

/****************野指针-指针越界访问*********************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 1;
//	for (i = 0; i < 11; i++) //当i = 10时，数组只有10个位置，p + 10指向的是第11个元素，越界
//	{
//		*(p + i) = i;  //此时p + 10是野指针
//	}
//	return 0;
//}

/****************野指针-指针指向的空间释放*********************/
//例子如/*野指针*/代码

/************避免野指针 - 指针初始化*************************/
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	int *q = NULL;  //NULL - 空指针
//	return 0;
//}

/************避免野指针 - 小心指针越界*************************/

/************避免野指针 - 指针空间释放即使置空******************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int p2 = arr;
//	//当p2不再直线法arr时
//	p2 = NULL;
//	return 0;
//}

/************避免野指针 - 指针使用之前检查有效性******************/
//#include<stdio.h>
//int main()
//{
//	//NULL 指向的空间是不能访问的
//	int* p = NULL;
//	//*p = 20;   //error
//	if (p != NULL)
//		*p = 20;
//	return 0;
//}

/************指针+-整数******************/
//#include<stdio.h>
//
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",*(p + i));
//	}
//	return 0;
//}

/************指针+-整数******************/
//#include<stdio.h>
//
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//		//++的优先级要高
//		//++后置，所以先使用再++
//	}
//	p = arr;//指针p一直在移动，要重新打印一遍需要重置指针
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

/************指针 - 指针******************/
//#include<stdio.h>
//
//int main()
//{
//	int arr[5] = { 0 };
//	char ch[5] = { 0 };
//
//	printf("%d\n",&arr[9] - &arr[0]);  //9
//	printf("%d\n", &arr[0] - &arr[9]);  //9
//	//指针 - 指针 是指针与指针之间的元素个数 ，负数区绝对值
//	//指针 - 指针 计算的前提条件是：两个指针指向的是同一块连续的存储空间
//
//	printf("%d\n",&arr[9] - &ch[3]); //error 两个数组内存空间不连续
//	return 0;
//}

/************指针的关系运算******************/
//#include<stdio.h>
//#define N_VALUES 5
//float values[N_VALUES];
//float *vp;
//int main()
//{
//	//1更好
//	for(vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}//	//2//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}//	/*//	C标准规定：//	允许指向数组元素的指针与数组最后一个元素后面的内存位置的指针作比较，//	但不允许与数组第一个元素前面的内存位置的指针作比较；//	*///
//	return 0;
//}

/************计算字符串长度******************/
////法1. 计数器
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
////法2.递归
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//		return my_strlen(str + 1) + 1;
//}
////法3.指针- 指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

///************指针和数组******************/
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//printf("%d ",*(p + i));
//		printf("&arr[%d] = %p  =====> %p\n",i,&arr[i], p+i);
//	}
//	return 0;
//}

/************指针和二维数组******************/
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	arr;//二维数组的数组名也是数组首元素的地址，首元素是第一行，第一行是一个一维数组
//	return 0;
//}

/************二级指针******************/
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a; //p是一级指针
//	int** pp = &p; //p是二级指针
//	// *表示是指针，int*表示是int*类型的指针
//	**pp = 20;
//	printf("%d\n",a);
//	return 0;
//}

/************指针数组******************/
//#include<stdio.h>
////数组
////整型数组 - 存放整形的数组
////字符数组 - 存放字符的数组
////指针数组 - 存放指针的数组
//int main()
//{
//	int arr[10] = { 0 }; //整型数组
//	char ch[5] = { 'a', 'b' }; //字符数组
//	//指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//arr就是指针数组
//	//存放整型指针的数组
//	int* arr[3] = { &a, &b, &c };
//	char* ch[5]; // 存放字符指针的数组
//	return 0;
//}

/************字符指针数组******************/
//#include<stdio.h>
//int main()
//{
//	char* arr[] = { "abcdef", "hello", "world" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}

/************结构体类型******************/
//#include<stdio.h>
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2;  //s1,s2是全局变量
//struct Stu s3; //全局变量
//int main()
//{
//	struct Stu s;
//	//局部变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

/************结构体成员的访问******************/
//#include<stdio.h>
//struct Point
//{
//	int x;
//	int y;
//}; 
//struct S
//{
//	char arr[10];
//	struct Point p;
//	double d;
//	int* ptr;
//};
//int main()
//{
//	struct Point p = { 1, 2 };
//	printf("%d %D\n",p.x,p.y);
//	int a = 2021;
//	struct S s = { "abcdef", { 2, 3 }, 3.14, &a };
//	printf("s %d %D %lf %d\n",s.arr,s.p.x,s.p.y,s.d,*(s.ptr));
//	struct Stu s2;
//	return 0;
//}

/************结构体类型传参******************/
#include<stdio.h>
struct S
{
	char arr[1000];
	int num;
	double d;
};
void print1(struct S ss)
{
	printf("%s %d %lf\n",ss.arr,ss.num,ss.d);
}
//相对要好，传递的是指针，占用内存空间小
void print2(struct S* ps)
{
	printf("%s %d %lf\n", ps->arr, ps->num, ps->d);
}
int main()
{
	struct S s = { "hello",100,99.9};
	print1(s);
	print2(&s);
	return 0;
}