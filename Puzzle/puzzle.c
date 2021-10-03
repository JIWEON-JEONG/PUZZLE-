#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>



int getKey();
int init(int* puzzle);
int check(int* puzzle);
void display(int* puzzle);
void getIndex(int key, int currentIndex, int *changeIndex);
int change(int* puzzle, int changeIndex, int currentIndex);

int main() {
	int puzzle[9] = { 0, };
	int key, i, currentIndex, changeIndex = 0, result;
	srand(time(NULL));
	currentIndex = init(puzzle);
	display(puzzle);
	while (1){
		key = getKey();
		if (key != 0) {
			getIndex(key, currentIndex, &changeIndex);
			currentIndex = change(puzzle, changeIndex, currentIndex);
			display(puzzle);
		}
		result = check(puzzle);
		if (result == 1) {
			break;
		}
	}
	printf("유철... 이걸 통과하다니 제법인걸..");
	
	

	return 0;
}