#define  _CRT_SECURE_NO_WARNINGS 1

/*****************����������****************************/
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", 7 / 2); 
//	printf("%f\n",7.0/2);
//	printf("%d\n", 7 % 2); 
//	return 0;
//}
/*****************��λ������****************************/
//����λ������ << 
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//����λ������ >>
//#include<stdio.h>
//int main()
//{
//	int a = -5;
//	int b = a >> 1;  //��������
//	printf("%d\n", b);  //b = -3
//	return 0;
//}

/*****************λ������****************************/
//���ܴ�����ʱ����,ʵ���������Ľ���
//����һ����ӣ������ܻ��������
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
//�����������,������ɶ��ԲЧ�ʵ�
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

/**************��һ�������洢���ڴ��еĶ�������1�ĸ���********************/
//����һ������% /
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
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}

//����������λ��
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
//	printf("��������1�ĸ��� = %d\n", count);
//	return 0;
//}

/*****************sizeof������****************************/
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
	//sizeof�����зŵı��ʽ�ǲ������
	return 0;
}












	///*�����Ķ����������ֱ�ʾ��ԭ�룬���룬����
	//��������ԭ�룬���룬������ͬ

	//int a = -1;
	//1000 0000 0000 0000 0000 0000 0000 0001 ԭ��
	//����ԭ��ķ���λ���䣬����λ��λȡ���õ��ľ��Ƿ���
	//1111 1111 1111 1111 1111 1111 1111 1110 ����
	//����+1���õ��ľ��ǲ���
	//1111 1111 1111 1111 1111 1111 1111 1111 ����
	//��������

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
