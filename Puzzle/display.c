#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

void display(int* puzzle) {
	int i;
	system("cls");
	for(i=0;i<9;i++){
		if (puzzle[i] == 0) {
			printf("*  ");
		}
		else {
			printf("%d  ", puzzle[i]);
		}
		if (i % 3 == 2) {
			printf("\n");
		}
	}
	
}