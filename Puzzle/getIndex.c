#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void getIndex(int key, int currentIndex, int *changeIndex) {
	int temp;
	switch (key) {
	case 72:	//up
		if (currentIndex < 3) {
			printf("�Է��� Ȯ�����ּ���");
		}
		else {
			*changeIndex = currentIndex - 3;
		}
		break;
	case 80:	//down
		if (currentIndex > 5) {
			printf("�Է��� Ȯ�����ּ���");
		}
		else {
			*changeIndex = currentIndex + 3;
		}
		break;
	case 77 :	//right
		if (currentIndex % 3 == 2) {
			printf("�Է��� Ȯ�����ּ���");
		}
		else {
			*changeIndex = currentIndex + 1;
		}
		break;
	case 75:	//left
		if (currentIndex % 3 == 0) {
			printf("�Է��� Ȯ�����ּ���");
		}
		else {
			*changeIndex = currentIndex - 1;
		}
		break;
	default : 
		break;
	}
}