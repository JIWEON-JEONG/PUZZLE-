#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

extern int(*pz)[3];
extern int cRow, cColumn;
extern int count;
extern int maxCount;

void display() {
	int i;
	system("cls");
	for (i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			printf("��������");
		}
		else if (i == 3 - 1)
		{
			printf("������\n");
		}
		else
		{
			printf("������");
		}
	}

	for (i = 0; i < 9; i++)
	{
		if (pz[i / 3][i % 3] == 0)
		{
			printf("�� *");
		}

		else
		{
			printf("��%2d", pz[i / 3][i % 3]);
		}

		if (i % 3 == 2)
		{
			printf("��\n");

			if (i < 3 * (2))
			{
				for (int h = 0; h < 3; h++)
				{
					if (h == 0)
					{
						printf("��������");
					}
					else if (h == 3 - 1)
					{
						printf("������\n");
					}
					else
					{
						printf("������");
					}
				}
			}

			else
			{
				for (int h = 0; h < 3; h++)
				{
					if (h == 0)
					{
						printf("��������");
					}
					else if (h == 3 - 1)
					{
						printf("������\n");
					}
					else
					{
						printf("������");
					}
				}
			}
		}
	}
	printf("\ncRow : %d\n", cRow);
	printf("cColumn : %d\n", cColumn);
	printf("=========================\n");
	printf("maxCount : %d\n", maxCount);
	printf("count : %d\n", count);
}