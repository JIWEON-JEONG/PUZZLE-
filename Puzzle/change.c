#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// extern Global_Variable
extern int(*pz)[3];
extern int cRow, cColumn;
extern int mRow, mColumn;

void change() {
	int temp;
	temp = pz[mColumn][mRow];
	pz[mColumn][mRow] = pz[cColumn][cRow];
	pz[cColumn][cRow] = temp;
	cRow = mRow;
	cColumn = mColumn;
}