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
	printf("��������������������\n");
	for (i = 0; i < 9; i++) {
		if (pz[i / 3][i % 3] == 0){
			printf("�� *");
		}

		else{
			printf("��%2d", pz[i / 3][i % 3]);
		}

		if (i % 3 == 2){

			printf("��\n");

			if (i < 6)
			{
				printf("��������������������\n");
			}
			else{
				printf("��������������������\n");
			}
		}
	}

	printf("\ncRow : %d\n", cRow);
	printf("cColumn : %d\n", cColumn);
	printf("=========================\n");
	printf("maxCount : %d\n", maxCount);
	printf("count : %d\n", count);
}