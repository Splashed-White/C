#define  _CRT_SECURE_NO_WARNINGS 1

/*********************折半查找*******************************/
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//在arr这个有序数组中查找一个数字k
//	int k = 0;
//	//sizeof(arr)计算的是数组的总大小，单位是字节-40个字节
//	//sizeof(arr[0])计算的是数组第一个元素的大小-4个字节
//	int sz = sizeof(arr) / sizeof(arr[0]);  //10
//	scanf("%d",&k);
//	//折半查找
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//      int mid = left + (right - left) / 2; //如果数据过大，这样改进不会数据溢出
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
//			printf("找到元素，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到该元素\n");
//	}
//	return 0;
//}

/******************打印字符串********************************/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	//char buf[] = "bit";
//	//[b i t \0]
//	// 0 1 2 3
//	//两种求字符串数组长度的方法:
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
//打印结果
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

/******************模拟用户登录********************************/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设正确的密码是字符串"123456"
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s",password);
//		if (strcmp(password, "123456") == 0) //strcmp()函数用于连个字符串的比较
//		{
//			printf("密码正确，登陆成功\n");
//			break;
//		}
//		else
//			printf("密码错误，登陆失败\n");
//	}
//	return 0;
//}

/******************猜数字游戏********************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//RANF_MAX 0x7fff
//0-32767
void game()
{
	//1.生成随机数1-100
	//电脑上的实践是在发生变化的，srand里面应该放一个随机值
	//时间戳：当前时间与计算机起始时间之间的差值，单位是秒
	//计算机的起始时间：1970-1-1
	//time()函数返回的就是时间戳

	int ret = rand()%100 + 1;//用于生成随机数的，1-100
	//printf("%d\n",ret); //伪随机
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字\n");
		scanf("%d",&guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else if (guess == ret)
			printf("恭喜你，猜对了\n");
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
	//整个过程设置一次就行，否则随机数会不够随机
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择（1/0）\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
				break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}

/******************goto语句********************************/
//#include<stdio.h>
//int main()
//{
//flag:
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	goto flag; //不能跨函数跳转
//	return 0;
//}
/******************关机程序********************************/
//一分钟内关机
//一分钟内输入：我是猪，则取消关机
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	//shutdown-s -t 60  倒计60s关机
//	char input[20] = "";
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s",input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
