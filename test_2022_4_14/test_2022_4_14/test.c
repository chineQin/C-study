#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int count = 0;
//int Fib(n)
//{
//	if (count == 3)//计算第三个斐波那契数所需次数
//		count++;
//
//	if (n <= 2)
//		return 1;
//	
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d\n", &n);
//	int ret = 0;
//	ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}
int Fib(n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		b = c;
		a = b;
		n--;
	}
	return c;
}
int count = 0;
int main()
{
	int n = 0;
	scanf("%d\n", &n);
	int ret = 0;
	ret = Fib(n);
	printf("%d\n", ret);
	printf("count = %d\n", count);
	return 0;
}