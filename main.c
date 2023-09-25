#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//变量使用
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("input:");
//	scanf("%d %d", &a, &b);
//	printf("sum=%d\n", a + b);
//	return 0;
//}

//常量
////define修饰的标识符常量
//#define M 1000
//enum MyEnum
//{
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET  
//};
//int main()
//{
//	//字面常量
//	2;
//	3.14;
//
//	//const修饰的常变量
//	const char f = 3.14f;
//	f = 12.14; //报错，被const修饰后不可更改
//	return 0;
//}

//转义字符
// \'：表示字符常量
// \"：表示一个字符串内部的双引号
// \\：表示一个反斜杠，防止它被解释成一个转义序列符
// \a：警告字符
// \n：换行
// \r：回车
// \t：水平制表符
// \add：ddd表示1-3个八进制（0-7）的数字。如：\130x
// \xdd：dd表示2个十六进制的数字。如：\0x19
//int main()
//{
//	printf("%c\n",'\'');//打印一个单引号
//	printf("%s\n","\"");//打印一个双引号
//	return 0;
//}

//关键字
//typedef unsigned int uint;//将unsigned int重新命名为int
//int main()
//{
//	uint a = 3;
//	printf("%d", a);
//	return 0;
//}
// 
// 修饰局部
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
//修饰全局
//main.c
//int main()
//{
//	extern g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//修饰函数
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
////输出：ba

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
//输出：a b d
//原因：缺乏break;
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
////输出：m=5,n=3

//while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;//作用：终止本次循环，跳转到while语句判断部分，进行下一次循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
////输出：1 2 3 4 （i=5之后开始）死循环

//int main()
//{
//	int rat = 0;
//	char password[20] = { 0 };
//	printf("输入密码：");
//	scanf("%s", password);
//	while ((rat = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认输入（y/n）:");
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
////输出：1 2 3 4 6 7 8 9 10
// 
//int main()
//{
//	for ( ;;)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////输出：haha死循环

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
////输出：2次"haha"

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
////输出：1 2 3 4 5 死循环

//传值和传址
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
////输出：num1=2,num2=1

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
////输出：3个"haha"

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
//	if (strlen(str2) - strlen(str1) > 0)//3-6=-3，由于返回值无符号，所以的结果是3
//	{
//		printf("str2 > str1\n");
//	}
//	else
//	{
//		printf("str1 > str2\n");
//	}
//	return 0;
//}
////输出：str2 > str1

//#include<string.h>
//int main()
//{
//	char arr1[] = "     ";
//	char arr2[] = "world";
//	printf("%s\n", strcpy(arr1, arr2));
//	return 0;
//}
////输出：world

//#include<string.h>
//int main()
//{
//	const char arr1[] = "zaa";
//	const char arr2[] = "aaa";
//	const char* p1 = "abbb";
//	const char* p2 = "addd";
//	printf("arr：%d\n", strcmp(arr1, arr2));
//	printf("p：%d\n", strcmp(p1, p2));
//	return 0;
//}
////输出：arr：1
////		p： - 1

//#include<string.h>
//int main()
//{
//	char arr1[5] = "abcd";
//	char arr2[10] = "fffffffff";
//	strncpy(arr2, arr1, 3);
//	printf("%s", arr2);
//	return 0;
//}
////输出：abcffffff

//#include<string.h>
//int main()
//{
//	char str1[20] = "hello ";
//	char str2[20] = "world ";
//	strncat(str1, str2, 8);
//	printf("%s", str1);
//	return 0;
//}
////输出：hello world

//#include<string.h>
//int main()
//{
//	char str1[20] = "abcdef ";
//	char str2[20] = "abcdff ";
//	int ret = strncmp(str1, str2, 8);
//	printf("%d", ret);
//	return 0;
//}
////输出：-1

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
////输出：defabcdef

//#include<string.h>
//int main()
//{
//	char* p = "https://github.com/Waznygx";
//	const char* delim = ":///";
//	char arr[40] = { 0 };
//	char* str = NULL;
//	strcpy(arr, p);//将数据拷贝一份，用于处理arr的内容
//	for (str = strtok(arr,delim); str != NULL; str = strtok(NULL, delim))
//	{
//		printf("%s ", str);
//	}
//
//	return 0;
//}
////输出：https github.com Waznygx

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
//		fclose(pf);//只有当文件成功打开时，才会尝试关闭文件。
//		//如果文件打开失败，fclose(pf) 将不会被执行
//	}
//	pf = NULL;
//	return 0;
//}
////输出：pf:No such file or directory

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
////输出：test string

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
////输出：1 2 0 0 0 0 0 0 0 0

#include<string.h>
int main()
{
	int arr1[10] = { 0 };
	int length = sizeof(arr1) / sizeof(arr1[0]);
	memset(arr1, 1, 20);//将 arr1 的前 5 个整数的每个字节都设置为了 1
	return 0;
}
//在内存窗口可查看