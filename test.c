#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	//��ӡ�ϰ벿��
	for (i = 0; i < line; i++)
	{
		int j = 0;
		//��ӡ�ո�
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ�Ǻ�
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		//����
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		//��ӡ�ո�
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ�Ǻ�
		for (j = 0; j < 2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		//����
		printf("\n");
	}
	return 0;
}