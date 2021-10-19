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
			printf("忙式式成");
		}
		else if (i == 3 - 1)
		{
			printf("式式忖\n");
		}
		else
		{
			printf("式式成");
		}
	}

	for (i = 0; i < 9; i++)
	{
		if (pz[i / 3][i % 3] == 0)
		{
			printf("弛 *");
		}

		else
		{
			printf("弛%2d", pz[i / 3][i % 3]);
		}

		if (i % 3 == 2)
		{
			printf("弛\n");

			if (i < 3 * (2))
			{
				for (int h = 0; h < 3; h++)
				{
					if (h == 0)
					{
						printf("戍式式托");
					}
					else if (h == 3 - 1)
					{
						printf("式式扣\n");
					}
					else
					{
						printf("式式托");
					}
				}
			}

			else
			{
				for (int h = 0; h < 3; h++)
				{
					if (h == 0)
					{
						printf("戌式式扛");
					}
					else if (h == 3 - 1)
					{
						printf("式式戎\n");
					}
					else
					{
						printf("式式扛");
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