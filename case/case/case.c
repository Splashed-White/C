#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//
//int main()
//{
//	int i, j, a = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j % 2)
//				break;
//			a++;
//		}
//		a++;
//	}
//	printf("%d\n",a);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;   //a 1 2 3  4  5  6  7  8
//		if (b % 3 == 1)       //b 4 7 10 13 16 19 22
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
/****************д���뽫���������Ӵ�С���********************************/
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int x = a;
//		a = b;
//		b = x;
//	}
//	if (a < c)
//	{
//		int x = a;
//		a = c;
//		c = x;
//	}
//	if (b < c)
//	{
//		int x = b;
//		b = c;
//		c = x;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
/****************дһ�������ӡ1-100֮������3�ı���������********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}
/****************���������������������������Լ��********************************/
//#include<stdio.h>
////շת�����
////�ýϴ�������Խ�С�������ܳ�������Լ�����ǽ�С���������������ý�С�������ϳ���һ�������������ֱ������Ϊ0����ʱ��Լ��Ϊ��һ�����������
//int main()
//{
//	int a, b;
//	int temp;
//	scanf("%d%d",&a,&b);
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}//a�ǽϴ������b�ǽ�С����
//	if (a % b == 0)
//		printf("���Լ��Ϊ%d\n",b);
//	while (a % b != 0)
//	{
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("���Լ��Ϊ%d\n", b);
//	return 0;
//}
/****************��ӡ1000�굽2000��֮�������********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		//�ж����꣺
//		//�ܱ�4�������ܱ�100�������ܱ�400����
//		if ((i% 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d������\n",i);
//		}
//		else
//			printf("%d��������\n", i);
//	}
//	return 0;
//}
/****************��ӡ100~200֮�������********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 2;
//	int a = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		a = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				a = 0;
//		}
//		if (a == 1)
//			printf("%d������\n",i);
//	}
//	return 0;
//}
/****************1��100�����������г��ֶ��ٸ�����9********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//���������ģ���λ9/ʮλ9��ʮλ����9
//		if (i % 10 == 9 || i / 10 == 9)
//			sum++;
//	}
//	printf("1��100�����������г�������9�ĸ���Ϊ��%d\n",sum);
//	return 0;
//}
/****************����1/1-1/2+1/3-1/4+1/5����+1/99-1/100��ֵ********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
/****************��10�����������ֵ********************************/
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("������10������\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("10�����������ֵΪ��%d\n", max);
//	return 0;
//}

/****************����Ļ�����9*9�˷��ھ���********************************/
//#include<stdio.h>
//
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/****************���ֲ���********************************/
//Ҫ����һ���������������в��Ҿ����ĳ����
//�ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k,mid;
	scanf("%d",&k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
			break;
	}
	if (left > right)
	{
		printf("�Ҳ�����Ԫ��\n");
	}
	else
	{
		printf("�ҵ�Ԫ�أ��±��ǣ�%d\n", mid);
	}

	return 0;
}
