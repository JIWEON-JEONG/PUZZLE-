#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

// extern Global_Variable
extern int pz[3][3];
extern int currRow;
extern int currColumn;

// extern function
extern int getKey();
extern void display();
extern void change(int changeRow, int changeColumn);
extern void getIndex(int key, int* changeRow, int* changeColumn);

int play(int *pzPoint) {
	static int count = 0;
	int i,key, changeRow,changeColumn ;
	int n[3] = {0,}, num;
	changeRow = currRow;
	changeColumn = currColumn;
	key = getKey();
	if (key != 0) {
		getIndex(key, &changeRow, &changeColumn);
		change(changeRow, changeColumn);
		for (i = 0; i < 3; i++) {
			n[i] = pz[i][i];
		}
		display();
		count++;


		printf("\nCOUNT : %d\n", count);
		for (i = 0; i < 3; i++) {
			num = n[i];
			printf("%s",pzPoint[num]);
			if (i < 2) {
				printf(" ,");
			}
		}
	}
	return count;
}
	
