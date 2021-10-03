#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check(int *puzzle) {
	int i;
	for (i = 0; i < 8; i++) {
		if (puzzle[i] != i + 1) {
			return 0;
		}
	}
	return 1;
}