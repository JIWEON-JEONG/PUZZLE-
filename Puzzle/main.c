#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

//Global_Variable
int(*pz)[3];
int cRow, cColumn;
int mRow, mColumn;
int count = 0;
int maxCount = 0;

//Import_Function
void init();
void display();
int play();
int check();

int main() {
	//Ŀ�� ���ֱ� �ڵ� 
	CONSOLE_CURSOR_INFO CurInfo;
	CurInfo.dwSize = 1;
	CurInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
	
	//main Code
	int  key = 0, result;
	char reGame;
	srand(time(NULL));
	pz = (int(*)[3])malloc(sizeof(int[3])*3);
	if (pz != NULL) {
		init();
		display();
	}
	else {
		printf("\n�޸𸮰����� �����Ͽ� �޸𸮸� �Ҵ� �� �� �����ϴ�.\n");
		return 0;
	}
	for (;;) {
		count = play();
		if (count > maxCount) {
			printf("\nȽ���� �ʰ��Ǿ����ϴ�.\n������ �����մϴ�.\n");
			return 0;
		}
		result = check();
		if (result == 1) {
			printf("\nFinish!!!\n");
			printf("continue? (y/n)");
			scanf_s("%c", &reGame,sizeof(reGame));
			if (reGame == 'n' || reGame == 'N') {
				return 0;
			}
			else {
				main();
			}
			
		}
	}
}