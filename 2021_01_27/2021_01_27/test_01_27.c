#define  _CRT_SECURE_NO_WARNINGS 1

/*************************************/
//#include<stdio.h>
//int main()
//{
//	return 0;
//}

/**************ָ�����***********************/
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a; //ָ�����
//	*p = 20;
//	return 0;
//}

/***************ָ������**********************/
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	//���p������ָ�룬�����÷�����4���ֽ�
//	//int* p = &a;
//	//*p = 0;
//	//���p���ַ�ָ�룬�����÷�����1���ֽ�
//	char* p = &a;
//	*p = 0;
//	//ָ�����͵ĵ�һ�����ã�������ָ��ķ���Ȩ�ޣ�Ҳ�����ܷ��ʼ����ֽ�
//	//ָ�����һ������ƥ�䣬���ʵ��ֽڲ��಻��
//	return 0;
//}


/***************ָ����������**********************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr; //������-��Ԫ�ص�ַ
//	char* pc = arr;
//	printf("%p\n", arr);
//	printf("%p\n",pa);
//	printf("%p\n", pa + 1);
//	printf("---------------------\n");
//	printf("%p\n",pc);
//	printf("%p\n", pc + 1);
//
//	//ָ�����͵ĵڶ������ã�ָ�����;�����ָ��+1���߶��ľ���
//	return 0;
//}

/****************ָ����������*********************/
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

/****************ָ����������*********************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//��ϣ����arr��10�����͵Ŀռ䣬����40���ֽڵĿռ�
//	//��ÿ���ֽڷ�һ���ַ���ȥ
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

/**************Ұָ��***********************/
//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//Ұ��  -
//	//Ұָ��  -
//	//p�õ��ĵ�ַ֮�󣬵�ַָ��ռ��Ѿ��ͷ��ˣ��������ʱ���p��Ұָ��
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n",*p);
//	return 0;
//}

/****************Ұָ��-ָ��δ��ʼ��*********************/
//#include<stdio.h>
//int main()
//{
//	int* p; //û���κγ�ʼ�� - ���ֵ
//	*p = 20;
//	return 0;
//}

/****************Ұָ��-ָ��Խ�����*********************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 1;
//	for (i = 0; i < 11; i++) //��i = 10ʱ������ֻ��10��λ�ã�p + 10ָ����ǵ�11��Ԫ�أ�Խ��
//	{
//		*(p + i) = i;  //��ʱp + 10��Ұָ��
//	}
//	return 0;
//}

/****************Ұָ��-ָ��ָ��Ŀռ��ͷ�*********************/
//������/*Ұָ��*/����

/************����Ұָ�� - ָ���ʼ��*************************/
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	int *q = NULL;  //NULL - ��ָ��
//	return 0;
//}

/************����Ұָ�� - С��ָ��Խ��*************************/

/************����Ұָ�� - ָ��ռ��ͷż�ʹ�ÿ�******************/
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int p2 = arr;
//	//��p2����ֱ�߷�arrʱ
//	p2 = NULL;
//	return 0;
//}

/************����Ұָ�� - ָ��ʹ��֮ǰ�����Ч��******************/
//#include<stdio.h>
//int main()
//{
//	//NULL ָ��Ŀռ��ǲ��ܷ��ʵ�
//	int* p = NULL;
//	//*p = 20;   //error
//	if (p != NULL)
//		*p = 20;
//	return 0;
//}

/************ָ��+-����******************/
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

/************ָ��+-����******************/
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
//		//++�����ȼ�Ҫ��
//		//++���ã�������ʹ����++
//	}
//	p = arr;//ָ��pһֱ���ƶ���Ҫ���´�ӡһ����Ҫ����ָ��
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

/************ָ�� - ָ��******************/
//#include<stdio.h>
//
//int main()
//{
//	int arr[5] = { 0 };
//	char ch[5] = { 0 };
//
//	printf("%d\n",&arr[9] - &arr[0]);  //9
//	printf("%d\n", &arr[0] - &arr[9]);  //9
//	//ָ�� - ָ�� ��ָ����ָ��֮���Ԫ�ظ��� ������������ֵ
//	//ָ�� - ָ�� �����ǰ�������ǣ�����ָ��ָ�����ͬһ�������Ĵ洢�ռ�
//
//	printf("%d\n",&arr[9] - &ch[3]); //error ���������ڴ�ռ䲻����
//	return 0;
//}

/************ָ��Ĺ�ϵ����******************/
//#include<stdio.h>
//#define N_VALUES 5
//float values[N_VALUES];
//float *vp;
//int main()
//{
//	//1����
//	for(vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}//	//2//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}//	/*//	C��׼�涨��//	����ָ������Ԫ�ص�ָ�����������һ��Ԫ�غ�����ڴ�λ�õ�ָ�����Ƚϣ�//	���������������һ��Ԫ��ǰ����ڴ�λ�õ�ָ�����Ƚϣ�//	*///
//	return 0;
//}

/************�����ַ�������******************/
////��1. ������
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
////��2.�ݹ�
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//		return my_strlen(str + 1) + 1;
//}
////��3.ָ��- ָ��
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

///************ָ�������******************/
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

/************ָ��Ͷ�ά����******************/
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	arr;//��ά�����������Ҳ��������Ԫ�صĵ�ַ����Ԫ���ǵ�һ�У���һ����һ��һά����
//	return 0;
//}

/************����ָ��******************/
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a; //p��һ��ָ��
//	int** pp = &p; //p�Ƕ���ָ��
//	// *��ʾ��ָ�룬int*��ʾ��int*���͵�ָ��
//	**pp = 20;
//	printf("%d\n",a);
//	return 0;
//}

/************ָ������******************/
//#include<stdio.h>
////����
////�������� - ������ε�����
////�ַ����� - ����ַ�������
////ָ������ - ���ָ�������
//int main()
//{
//	int arr[10] = { 0 }; //��������
//	char ch[5] = { 'a', 'b' }; //�ַ�����
//	//ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//arr����ָ������
//	//�������ָ�������
//	int* arr[3] = { &a, &b, &c };
//	char* ch[5]; // ����ַ�ָ�������
//	return 0;
//}

/************�ַ�ָ������******************/
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

/************�ṹ������******************/
//#include<stdio.h>
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2;  //s1,s2��ȫ�ֱ���
//struct Stu s3; //ȫ�ֱ���
//int main()
//{
//	struct Stu s;
//	//�ֲ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

/************�ṹ���Ա�ķ���******************/
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

/************�ṹ�����ʹ���******************/
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
//���Ҫ�ã����ݵ���ָ�룬ռ���ڴ�ռ�С
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