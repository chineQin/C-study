#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//get_max(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max;
//	max = get_max(a, b);
//	printf("%d", max);
//
//	return 0;
//}

void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;

}
int main()
{
	int a = 10;
	int b = 20;
	printf("变换前：a==%d b==%d\n", a, b);
	Swap(&a, &b);
	printf("变换后：a==%d b==%d\n", a, b);

	return 0;
}