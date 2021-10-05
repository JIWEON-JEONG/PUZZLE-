#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// extern Global_Variable
extern int pz[3][3];
extern int currRow;
extern int currColumn;

void init() {
	int value[] = { 0,1,2,3,4,5,6,7,8 };
	int index, i;
	for (i = 0; i < 9; i++) {
		while (1) {
			index = rand() % 9;
			if (value[index] == -1) {
				i--;
				break;
			}
			pz[i / 3][i % 3] = value[index];
			if (value[index] == 0) {
				currRow = i % 3;
				currColumn = i / 3;
			}
			value[index] = -1;
			break;
		}
	}
}