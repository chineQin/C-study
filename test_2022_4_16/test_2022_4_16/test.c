#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)//��
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//��
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);
//		}
//		printf("\n");//����
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//
//}
void reverse_string(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) >= 2)
	{
		reverse_string(str + 1);
	}
	*(str + len - 1) = tmp;
}
int main()
{
	char arr[] = "abcdfe";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}