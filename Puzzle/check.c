#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// extern Global_Variable
extern int(*pz)[3];

int check() {
	int i;
	for (i = 0; i < 8; i++) {
		if (pz[i/3][i%3] != i + 1) {
			return 0;
		}
	}
	return 1;
}