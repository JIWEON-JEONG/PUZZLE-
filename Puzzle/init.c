#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//return *(0)ÀÇ À§Ä¡ 
int init(int *puzzle) {
	int i,j,result;
	for (i = 0; i < 9; i++) {
		puzzle[i] = rand() % 9;
		for (j = 0; j < i; j++) {
			if (puzzle[i] == puzzle[j]) {
				i--;
				break;
			}
		}
		if (puzzle[i] == 0) {
			result = i;
		}
	}

	return result;
}