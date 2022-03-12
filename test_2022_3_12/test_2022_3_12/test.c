#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b, c, min;
	printf("整数1:");     scanf("%d", &a);
	printf("整数2:");     scanf("%d", &b);
	printf("整数3:");     scanf("%d", &c);
	min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	printf("三个数字最小的值是%d\n", min);

	return 0;
}