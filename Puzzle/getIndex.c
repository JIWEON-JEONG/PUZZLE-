#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// extern Global_Variable
extern int cRow, cColumn;
extern int mRow, mColumn;

void getIndex(int key) {
	int temp;
	switch (key) {
	case 72:	//up
		if (cColumn > 0 && cColumn <= 2) {
			mColumn = cColumn -1 ;
		}
		break;
	case 80:	//down
		if (cColumn < 2 && cColumn >= 0) {
			mColumn = cColumn + 1;
		}
		break;
	case 77 :	//right
		if (cRow < 2 && cRow >= 0) {
			mRow = cRow + 1;
		}
		break;
	case 75:	//left
		if (cRow > 0 && cRow <= 2 ) {
			mRow = cRow - 1;
		}
		break;
	case 115:
		printf("gd");
	default : 
		break;
	}
}