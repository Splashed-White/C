#define  _CRT_SECURE_NO_WARNINGS 1

/**********�ṹ���ڴ���� - ��ϰ1**************/
//#include<stdio.h>
//#include<stddef.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
////offsetof - ������ǽṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
//int main()
//{
//	struct S1 s1;
//	printf("%d\n", sizeof(s1));  //12
//	//�ṹ���ټ����С��ʱ�򣬻ᷢ������
//	printf("%d\n",offsetof(struct S1,c1));  //0
//	printf("%d\n", offsetof(struct S1, i));  //4
//	printf("%d\n", offsetof(struct S1, c2));  //8
//	return 0;
//}

/**********�ṹ���ڴ���� - ��ϰ2**************/
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

/**********�ṹ���ڴ���� - ��ϰ3**************/
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

/**********�ṹ���ڴ���� - ��ϰ4**************/
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

/**********�޸�Ĭ�϶����� - ��ϰ1**************/
//#include<stdio.h>
//#pragma pack(1)  //�޸�Ĭ�϶�����λ1
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()  //�ָ�Ĭ�϶�����
//int main()
//{
//	printf("%d\n",sizeof(struct S1));  //6
//	return 0;
//}

/**********�޸�Ĭ�϶����� - ��ϰ3**************/
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

/**********дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��**************/
//#include<stdio.h>
////ģ��ʵ��offsetof
//int main()
//{
//	return 0;
//}

/**********λ��**************/
////λ�ε������ͽṹ�����Ƶģ���������ͬ��
////1.λ�εĳ�Ա������ int��unsigned int ��signed int ;
////2.λ�εĳ�Ա�������һ��ð�ź�һ������;
//#include<stdio.h>
//struct A
//{
//	int _a : 2;    //_aֻ��Ҫ2������λ
//	int _b : 5;    //_bֻ��Ҫ5������λ
//	int _c : 10;    //_cֻ��Ҫ10������λ
//	int _d : 30;    //_bֻ��Ҫ30������λ
//};
///*
//λ�� - ������
//Ŀ�ģ�Ϊ����һ���̶��Ͻ�ʡ�ռ�
//*/
//int main()
//{
//	struct A sa; //
//	//һ�ο���һ������ - 4���ֽ�
//	// 4 - 32��bitλ
//	// _a - 2��
//	// _b - 5��
//	// _c - 10��   ��ʱ��ʣ15��bitλ
//	//�ֿ���һ������ - 4���ֽ�
//	// _d - 30��    C��׼δ�涨�Ƿ���ǰ��ʣ�µ��ֽ�
//	//�ܹ�����8���ֽ�
//	printf("%d\n",sizeof(struct A));    //8
//	return 0;
//}

/**********λ�οռ俪��**************/
/*
�ڵ�ǰ��VSƽ̨�ϣ�
1. ǰһ���ռ�ʣ��ı���λ����ʱ��ֱ���˷ѣ�ʹ���¿��ٿռ�ı���λ��
2. һ���ֽ��ڲ����Ǵӵ�λ����λʹ�õģ�
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
//	//���Դ��ڼ���ڴ�  &s 62 03 04
//	//��ʱû����֮ǰʣ�µĿռ䣬�����¿��ٵ����Ϳռ�
//	return 0;
//}

/**********ö������**************/
//#include<stdio.h>
////enum Sex
////{
////	//ö�����͵Ŀ���ȡֵ
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

/**********ö�������ŵ�**************/
//#include<stdio.h>
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//	//Ĭ��0 1 2 3 4
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
//		printf("��ѡ��>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//			//���Ӵ���ɶ���
//		case ADD:
//			printf("����������������>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case SUB:
//			printf("����������������>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case MUL:
//			printf("����������������>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case DIV:
//			printf("����������������>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		defalut:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

/**********��������**************/
//#include<stdio.h>
//union Un
//{
//	//c��i��ռ��ͬһ��ռ�
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

/**********��С�˴洢**************/
//#include<stdio.h>
//int main()
//{
//	int a = 1; //0x 00 00 00 01 
//	//��                     ��
//	//01 00 00 00  - С�˴洢
//	//00 00 00 01  - ��˴洢
//	if (1 == *(char*)&a) // int*
//	{
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	if (1 == *(char*)&a)  //�鿴a����ĵ�һ���ֽڴ����1����0
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
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
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
//	return u.c;   //u.c���ǵ�һ���ֽ�
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//	return 0;
//}

