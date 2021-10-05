#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

// extern Global_Variable
extern int pz[3][3];
extern int currRow;
extern int currColumn;

void display() {
	int i;
	system("cls");
	for(i=0;i<9;i++){
		if (pz[i/3][i%3] == 0) {
			printf(" *  ");
		}
		else {
			printf("%2d  ", pz[i/3][i%3]);
		}
		if (i % 3 == 2) {
			printf("\n");
		}
	}
	
}