#define  _CRT_SECURE_NO_WARNINGS 1

/*********************�۰����*******************************/
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//��arr������������в���һ������k
//	int k = 0;
//	//sizeof(arr)�������������ܴ�С����λ���ֽ�-40���ֽ�
//	//sizeof(arr[0])������������һ��Ԫ�صĴ�С-4���ֽ�
//	int sz = sizeof(arr) / sizeof(arr[0]);  //10
//	scanf("%d",&k);
//	//�۰����
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//      int mid = left + (right - left) / 2; //������ݹ��������Ľ������������
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ�Ԫ�أ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����Ԫ��\n");
//	}
//	return 0;
//}

/******************��ӡ�ַ���********************************/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	//char buf[] = "bit";
//	//[b i t \0]
//	// 0 1 2 3
//	//�������ַ������鳤�ȵķ���:
//	//sizeof(buf)/sizeof(buf[0]) - 2;
//	//strlen(buf) - 1;
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}
//��ӡ���
//w##################!
//we################!!
//wel##############!!!
//welc############!!!!
//welco##########!!!!!
//welcom########!!!!!!
//welcome######t!!!!!!
//welcome ####it!!!!!!
//welcome t##bit!!!!!!
//welcome to bit!!!!!!

/******************ģ���û���¼********************************/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//������ȷ���������ַ���"123456"
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺\n");
//		scanf("%s",password);
//		if (strcmp(password, "123456") == 0) //strcmp()�������������ַ����ıȽ�
//		{
//			printf("������ȷ����½�ɹ�\n");
//			break;
//		}
//		else
//			printf("������󣬵�½ʧ��\n");
//	}
//	return 0;
//}

/******************��������Ϸ********************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//RANF_MAX 0x7fff
//0-32767
void game()
{
	//1.���������1-100
	//�����ϵ�ʵ�����ڷ����仯�ģ�srand����Ӧ�÷�һ�����ֵ
	//ʱ�������ǰʱ����������ʼʱ��֮��Ĳ�ֵ����λ����
	//���������ʼʱ�䣺1970-1-1
	//time()�������صľ���ʱ���

	int ret = rand()%100 + 1;//��������������ģ�1-100
	//printf("%d\n",ret); //α���
	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������\n");
		scanf("%d",&guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else if (guess == ret)
			printf("��ϲ�㣬�¶���\n");
		break;
	}

}
void menu()
{
	printf("*******************\n");
	printf("***** 1.play ******\n");
	printf("***** 0.exit ******\n");
	printf("*******************\n");
}
int main()
{
	int input = 0;
	//������������һ�ξ��У�����������᲻�����
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��1/0��\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
				break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}

/******************goto���********************************/
//#include<stdio.h>
//int main()
//{
//flag:
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	goto flag; //���ܿ纯����ת
//	return 0;
//}
/******************�ػ�����********************************/
//һ�����ڹػ�
//һ���������룺��������ȡ���ػ�
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	//shutdown-s -t 60  ����60s�ػ�
//	char input[20] = "";
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s",input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
