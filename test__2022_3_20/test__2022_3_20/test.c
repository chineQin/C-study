#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int no;
	printf("������һ��������\n");
	scanf("%d\n", &no);

	while (0 <= no)
	{
		printf("%d ", no);
		no--;
	}
	printf(" ");

	return 0;
}