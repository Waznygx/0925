#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����ʹ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("input:");
//	scanf("%d %d", &a, &b);
//	printf("sum=%d\n", a + b);
//	return 0;
//}

//����
////define���εı�ʶ������
//#define M 1000
//enum MyEnum
//{
//	//ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET  
//};
//int main()
//{
//	//���泣��
//	2;
//	3.14;
//
//	//const���εĳ�����
//	const char f = 3.14f;
//	f = 12.14; //������const���κ󲻿ɸ���
//	return 0;
//}

//ת���ַ�
// \'����ʾ�ַ�����
// \"����ʾһ���ַ����ڲ���˫����
// \\����ʾһ����б�ܣ���ֹ�������ͳ�һ��ת�����з�
// \a�������ַ�
// \n������
// \r���س�
// \t��ˮƽ�Ʊ��
// \add��ddd��ʾ1-3���˽��ƣ�0-7�������֡��磺\130x
// \xdd��dd��ʾ2��ʮ�����Ƶ����֡��磺\0x19
//int main()
//{
//	printf("%c\n",'\'');//��ӡһ��������
//	printf("%s\n","\"");//��ӡһ��˫����
//	return 0;
//}

//�ؼ���
//typedef unsigned int uint;//��unsigned int��������Ϊint
//int main()
//{
//	uint a = 3;
//	printf("%d", a);
//	return 0;
//}
// 
// ���ξֲ�
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//
//����ȫ��
//main.c
//int main()
//{
//	extern g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//���κ���
////main.c
//int main()
//{
//	printf("%d\n", add(2, 3));
//	return 0;
//}

//if
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("ab\n");
//	}
//	else
//		printf("ba\n");
//	return 0;
//}
////�����ba

//switch
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x%2)
//	{
//	case 1:
//		switch (y-3)
//		{
//		case 0:
//			printf("a ");
//			break;
//		case 1:
//			printf("b ");
//			break;
//		default:
//			printf("c ");
//			break;
//		}
//		break;
//	case 2:
//		printf("d ");
//		break;
//	}
//	return 0;
//}
//�����a b d
//ԭ��ȱ��break;
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("error");
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
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//	return 0;
//}
////�����m=5,n=3

//while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;//���ã���ֹ����ѭ������ת��while����жϲ��֣�������һ��ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
////�����1 2 3 4 ��i=5֮��ʼ����ѭ��

//int main()
//{
//	int rat = 0;
//	char password[20] = { 0 };
//	printf("�������룺");
//	scanf("%s", password);
//	while ((rat = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�����루y/n��:");
//	rat = getchar();
//	if (rat == 'y')
//	{
//		printf("correct\n");
//	}
//	else
//	{
//		printf("error\n");
//	}
//	return 0;
//}

//for
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);	
//	}
//	return 0;
//}
////�����1 2 3 4 6 7 8 9 10
// 
//int main()
//{
//	for ( ;;)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////�����haha��ѭ��

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++) 
//		{
//			printf("haha\n");
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////�����2��"haha"

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		i++;
//		printf("%d ", i);
//	} while (i < 10);
//	return 0;
//}
////�����1 2 3 4 5 ��ѭ��

//��ֵ�ʹ�ַ
//void swap1(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
//void swap2(int* num1, int* num2)
//{
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	swap2(&num1, &num2);
//	printf("num1=%d,num2=%d", num1, num2);
//	/*swap1(num1, num2);
//	printf("num1=%d,num2=%d",num1,num2);*/
//	return 0;
//}
////�����num1=2,num2=1

//void new_line()
//{
//	printf("haha\n");
//}
//void three_line()
//{
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}
////�����3��"haha"

//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char arr[20] = "hello";
//	int ret = 0;
//	ret = strlen(strcat(arr, "bit"));
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "aaa";
//	if (strlen(str2) - strlen(str1) > 0)//3-6=-3�����ڷ���ֵ�޷��ţ����ԵĽ����3
//	{
//		printf("str2 > str1\n");
//	}
//	else
//	{
//		printf("str1 > str2\n");
//	}
//	return 0;
//}
////�����str2 > str1

//#include<string.h>
//int main()
//{
//	char arr1[] = "     ";
//	char arr2[] = "world";
//	printf("%s\n", strcpy(arr1, arr2));
//	return 0;
//}
////�����world

//#include<string.h>
//int main()
//{
//	const char arr1[] = "zaa";
//	const char arr2[] = "aaa";
//	const char* p1 = "abbb";
//	const char* p2 = "addd";
//	printf("arr��%d\n", strcmp(arr1, arr2));
//	printf("p��%d\n", strcmp(p1, p2));
//	return 0;
//}
////�����arr��1
////		p�� - 1

//#include<string.h>
//int main()
//{
//	char arr1[5] = "abcd";
//	char arr2[10] = "fffffffff";
//	strncpy(arr2, arr1, 3);
//	printf("%s", arr2);
//	return 0;
//}
////�����abcffffff

//#include<string.h>
//int main()
//{
//	char str1[20] = "hello ";
//	char str2[20] = "world ";
//	strncat(str1, str2, 8);
//	printf("%s", str1);
//	return 0;
//}
////�����hello world

//#include<string.h>
//int main()
//{
//	char str1[20] = "abcdef ";
//	char str2[20] = "abcdff ";
//	int ret = strncmp(str1, str2, 8);
//	printf("%d", ret);
//	return 0;
//}
////�����-1

//#include<string.h>
//int main()
//{
//	char str1[30] = "abcdefabcdef";
//	char str2[30] = "def";
//	char* ret = strstr(str1, str2);//char*
//	if (ret == NULL)
//	{
//		printf("not found!\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
////�����defabcdef

//#include<string.h>
//int main()
//{
//	char* p = "https://github.com/Waznygx";
//	const char* delim = ":///";
//	char arr[40] = { 0 };
//	char* str = NULL;
//	strcpy(arr, p);//�����ݿ���һ�ݣ����ڴ���arr������
//	for (str = strtok(arr,delim); str != NULL; str = strtok(NULL, delim))
//	{
//		printf("%s ", str);
//	}
//
//	return 0;
//}
////�����https github.com Waznygx

//#include<string.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("pf");
//	}
//	else
//	{
//		fclose(pf);//ֻ�е��ļ��ɹ���ʱ���Ż᳢�Թر��ļ���
//		//����ļ���ʧ�ܣ�fclose(pf) �����ᱻִ��
//	}
//	pf = NULL;
//	return 0;
//}
////�����pf:No such file or directory

//#include<ctype.h>
//int main()
//{
//	int i = 0;
//	char str[] = "Test STrINg\n";
//	char c = 0;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//		{
//			c = tolower(c);
//		}
//		putchar(c);
//		i++;
//	}
//	return 0;
//}
////�����test string

//#include<string.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arr1[10] = { 0 };
//	memcpy(arr1, arr, 8);
//	int length = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for ( i = 0; i < length; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
////�����1 2 0 0 0 0 0 0 0 0

#include<string.h>
int main()
{
	int arr1[10] = { 0 };
	int length = sizeof(arr1) / sizeof(arr1[0]);
	memset(arr1, 1, 20);//�� arr1 ��ǰ 5 ��������ÿ���ֽڶ�����Ϊ�� 1
	return 0;
}
//���ڴ洰�ڿɲ鿴