#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// extern Global_Variable
extern int(*pz)[3];
extern int cRow, cColumn;
extern int count;
extern int maxCount;

void init() {
	int value[] = { 0,1,2,3,4,5,6,7,8 };
	int index, i;
	printf("maxCount 를 입력하세요 : ");
	scanf("%d", &maxCount);
	count =  0;
	for (i = 0; i < 9; i++) {
		while (1) {
			index = rand() % 9;
			if (value[index] == -1) {
				i--;
				break;
			}
			pz[i / 3][i % 3] = value[index];
			if (value[index] == 0) {
				cRow = i % 3;
				cColumn = i / 3;
			}
			value[index] = -1;
			break;
		}
	}
}