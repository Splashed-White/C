#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/**************���1����100�����е�����********************/
//int main()
//{
//	for (int i = 1; i <= 100; i+=2)
//	{
//			printf("%d",i);
//	}
//	return 0;
//}

//

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //���ʽ����������int
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("ѡ�����\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//	default:break;
//	}
//	printf("m = %d,n = %d\n",m,n);
//	return 0;
//}
int main()
{
	int i = 0;
	int n;
	int ret = 1;
	int sum = 0;
	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
		sum = sum + ret;
	}
	printf("%d\n",sum);
}