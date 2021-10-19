#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

// extern Global_Variable
extern int(*pz)[3];
extern int cRow, cColumn;
extern int mRow, mColumn;
extern int count;
extern int maxCount;

// extern function
extern int getKey();
extern void change();
extern void getIndex(int key);
extern void display();

int play() {
	int key;
	mRow = cRow;
	mColumn = cColumn;
	key = getKey();
	if (key != 0) {
		count++;
		getIndex(key);
		change();
		display();
	}
	return count;
}
	
