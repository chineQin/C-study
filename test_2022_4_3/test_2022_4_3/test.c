#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int a = 0;
//	Add(&a);
//	printf("%d\n", a);
//
//	Add(&a);
//	printf("%d\n", a);
//
//	Add(&a);
//	printf("%d\n", a);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Add(int, int);//按照循序执行，如果函数定义放在后面需要先函数声明
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

//
//void test2()//函数允许嵌套调用，但是不允许嵌套定义
//
//{
//	printf("hehe\n");
//}
//int test1(int y, int x)
//{
//	test2();
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = test1(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}