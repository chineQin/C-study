#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void menu()
{
	printf("************************\n");
	printf("******* 1.play  ********\n");
	printf("******* 0.exit  ********\n");
	printf("************************\n");

}

void game()
{
	//�����ֵ�ʵ��
	//1.���������
	//rand��������һ��32767֮�������
	//ʱ���ڷ����仯��ʱ���

	int ret = rand() % 100 + 1;//%100��������0-99��Ȼ��+1����Χ����0-100
	//printf("%d\n", ret);

	//2.������
	int guess = 0;
	while (1)
	{
		printf("������֣�>\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}

	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}