#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//double_year(int n)
//{
//	while (n--)
//	{
//		if ((n % 4) || (n / 400))
//		{
//			printf("%d ", n);
//		}
//		else
//			return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	double_year(year);
//	printf("»ÚƒÍ”–%d", year);
//	return 0;
//}
//void print_table(n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reveser_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reveser_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reveser_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//int main()
//{
//	int num = 1729;
//	int sum =DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k));
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    int ret = 0;
    int i = 0;
    while (n)
    {
        int w = n % 10;
        if (0 == w % 2)
        {
            w = 0;
        }
        else
        {
            w = 1;
        }
        ret += w * pow(10, i++);
        n /= 10;
    }

    printf("%d\n", ret);

    return 0;
}