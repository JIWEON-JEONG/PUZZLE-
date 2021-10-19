#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// extern Global_Function
extern int main();

int getKey() {
	int key = NULL;
	if (_kbhit()) {
		key = _getch();
		if (key == 224) {
			key = _getch();
		}
		else if (key == 114) {
			system("cls");
			main();
		}
	}

	return key;
}
