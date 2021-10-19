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
	printf("忙式式成式式成式式忖\n");
	for (i = 0; i < 9; i++) {
		if (pz[i / 3][i % 3] == 0){
			printf("弛 *");
		}

		else{
			printf("弛%2d", pz[i / 3][i % 3]);
		}

		if (i % 3 == 2){

			printf("弛\n");

			if (i < 6)
			{
				printf("戍式式托式式托式式扣\n");
			}
			else{
				printf("戌式式扛式式扛式式戎\n");
			}
		}
	}

	printf("\ncRow : %d\n", cRow);
	printf("cColumn : %d\n", cColumn);
	printf("=========================\n");
	printf("maxCount : %d\n", maxCount);
	printf("count : %d\n", count);
}