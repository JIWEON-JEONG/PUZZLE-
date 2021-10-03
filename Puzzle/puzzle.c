#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int getKey();
int init(int* puzzle);

int main() {
	int puzzle[9] = {0,};
	int key,i,currentIndex;
	srand(time(NULL));
	key = getKey();
	currentIndex = init(puzzle);
	for (i = 0; i < 9; i++) {
		printf("%2d", puzzle[i]);
		if (i==2 || i==5 || i==8) {
			printf("\n");
		}
	}

	return 0;
}