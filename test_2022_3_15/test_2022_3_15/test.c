#define CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 0;
	for (a = 1; a <= 100; a+=2)
	{
		/*if (1 == a % 2)*/
			printf("%d\n", a);
	}

	return 0;
}