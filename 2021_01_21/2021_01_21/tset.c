#define  _CRT_SECURE_NO_WARNINGS 1
/*******************�ַ�������*************************/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";//����Դ
//	char arr2[] = {0};//Ŀ�ĵ�
//	strcpy(arr2, arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
/*******************memset����*************************/
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
/*******************�ҳ����������Ľϴ�ֵ*************************/
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
//	int max = get_max(a,b);//�ҳ����������Ľϴ�ֵ
//	printf("max = %d\n",max);
//	return 0;
//}
/*******************�����������ε���ֵ*************************/
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
//	//swap(a, b); �޷�ʵ�ֽ���������ֵ����
//	swap(&a, &b);//����a,b��ֵ������ַ����
//	printf("a = %d, b = %d\n",a,b);
//	return 0;
//}
/*******************�ú����ж�һ�����Ƿ�Ϊ����*************************/
//#include<stdio.h>
//#include<math.h>
//int prime(int a)
//{
//	int z = 1;
//	//һ����x����й�����������������һ��������С�ڻ���ڿ�����x
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
//		printf("%d������\n",x);
//	else
//		printf("%d��������\n", x);
//	return 0;
//}
/*******************�ú����ж�һ���Ƿ�Ϊ����*************************/
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
//		printf("%d������\n", year);
//	else
//		printf("%d��������\n", year);
//	return 0;
//}
/*******************�ú���ʵ��������������Ķ��ֲ���*************************/
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
	//������Ϊ��������ʱ�����ݵ���������Ԫ�صĵ�ַ����Ҫ�������������С
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz); //�ҵ������±꣬�Ҳ�������-1
	if (ret == -1)
		printf("û���ҵ���Ԫ��\n");
	else
		printf("�ҵ���Ԫ�أ����±�Ϊ%d\n",ret);
	return 0;
}