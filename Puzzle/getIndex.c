#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// extern Global_Variable
extern int pz[3][3];
extern int currRow;
extern int currColumn;

void getIndex(int key, int *changeRow, int *changeColumn) {
	int temp;
	switch (key) {
	case 72:	//up
		if (currColumn > 0 && currColumn <= 2) {
			*changeColumn = currColumn -1 ;
		}
		break;
	case 80:	//down
		if (currColumn < 2 && currColumn >= 0) {
			*changeColumn = currColumn + 1;
		}
		break;
	case 77 :	//right
		if (currRow < 2 && currRow >= 0) {
			*changeRow = currRow + 1;
		}
		break;
	case 75:	//left
		if (currRow > 0 && currRow <= 2 ) {
			*changeRow = currRow - 1;
		}
		break;
	default : 
		break;
	}
}