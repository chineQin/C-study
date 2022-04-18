#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}


int main()
{
	unsigned int num = 0;
	scanf("%u ", &num);
	//递归，函数自己调用自己
	print(num);//函数可以打印参数的每一位

	return 0;
}