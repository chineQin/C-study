#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b, c, min;
	printf("����1:");     scanf("%d", &a);
	printf("����2:");     scanf("%d", &b);
	printf("����3:");     scanf("%d", &c);
	min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	printf("����������С��ֵ��%d\n", min);

	return 0;
}