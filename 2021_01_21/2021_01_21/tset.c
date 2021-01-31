#define  _CRT_SECURE_NO_WARNINGS 1
/*******************字符串拷贝*************************/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";//数据源
//	char arr2[] = {0};//目的地
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
/*******************memset函数*************************/
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr,'x',5);
//	//memset
//	//void * memset(void * ptr, int value, size_t num);
//	printf("%s\n", arr);
//	return 0;
//}//xxxx bit
/*******************找出两个整数的较大值*************************/
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	int z = (x > y) ? (x) : (y);
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);//找出两个整数的较大值
//	printf("max = %d\n",max);
//	return 0;
//}
/*******************交换两个整形的数值*************************/
//#include<stdio.h>
//void swap(int* px, int* py)
//{
//	int temp;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//swap(a, b); 无法实现交换——传值调用
//	swap(&a, &b);//交换a,b的值——传址调用
//	printf("a = %d, b = %d\n",a,b);
//	return 0;
//}
/*******************用函数判断一个数是否为素数*************************/
//#include<stdio.h>
//#include<math.h>
//int prime(int a)
//{
//	int z = 1;
//	//一个数x如果有公因数，那至少其中一个公因数小于或等于开根号x
//	for (int i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//			z = 0;
//	}
//	return z;
//}
//int main()
//{
//	int x;
//	scanf("%d",&x);
//	int flag = prime(x);
//	if (flag == 1)
//		printf("%d是素数\n",x);
//	else
//		printf("%d不是素数\n", x);
//	return 0;
//}
/*******************用函数判断一年是否为闰年*************************/
//#include<stdio.h>
//int leap(int a)
//{
//	int z;
//	if ((a % 4 == 0) && (a % 100 != 0))
//		return z = 1;
//	else if (a % 400 == 0)
//		return z = 1;
//	else
//		return z = 0;
//}
//
//int main()
//{
//	int year;
//	int flag;
//	scanf("%d",&year);
//	flag = leap(year);
//	if (flag == 1)
//		printf("%d是闰年\n", year);
//	else
//		printf("%d不是闰年\n", year);
//	return 0;
//}
/*******************用函数实现整型有序数组的二分查找*************************/
#include<stdio.h>
//int binary_search(int * arr,int k)
int binary_search(int arr[],int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] == k)
			return mid;
	}
	return -1;
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	//scanf("%d",&k);
	//数组作为参数传参时，传递的是数组首元素的地址；需要数组名、数组大小
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz); //找到返回下标，找不到返回-1
	if (ret == -1)
		printf("没有找到该元素\n");
	else
		printf("找到该元素，其下标为%d\n",ret);
	return 0;
}