#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// extern Global_Variable
extern int pz[3][3];
extern int currRow;
extern int currColumn;

void change(int changeRow, int changeColumn) {
	int temp;
	temp = pz[changeColumn][changeRow];
	pz[changeColumn][changeRow] = pz[currColumn][currRow];
	pz[currColumn][currRow] = temp;
	currRow = changeRow;
	currColumn = changeColumn;
}