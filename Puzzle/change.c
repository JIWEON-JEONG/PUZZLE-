#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change(int* puzzle, int changeIndex, int currentIndex) {
	int temp;
	temp = puzzle[changeIndex];
	puzzle[changeIndex] = puzzle[currentIndex];
	puzzle[currentIndex] = temp;

	return changeIndex;
}