#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int getKey() {
	int key = NULL;
	if (_kbhit()) {
		key = _getch();
		if (key == 224) {
			key = _getch();
		}
	}

	return key;
}
