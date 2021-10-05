#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

//Global_Variable
int pz[3][3] = { 0,1,2,3,4,5,6,7,8 };
int currRow, currColumn;
//Import_Function
void init();
void display();
int check();
void change(int changeRow, int changeColumn);
void getIndex(int key, int* changeRow, int* changeColumn);
int play(int *pzPoint);

int main() {
	int* pzPoint[] = {"star","one","two","three","four","five","six","seven","eight"};
	int  count,result,i,r;
	char reGame;
	back:
	srand(time(NULL));
	init();
	display();
	for (;;) {
		count = play(pzPoint);
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