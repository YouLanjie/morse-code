#include "../include/head.h"

int main() {
	Clear
	int a=1;

	while(a!=0) {
		welcome();
		a = input();
		switch(a) {
			case 0x31:
				Clear
				morse1();
				Clear
				break;
			case 0x32:
				Clear
				morse2();
				Clear
				break;
			case 0x33:
				Clear
				help();
				Clear
				break;
			case 0x1B:
			case 0x30:
				Clear2
				return 0;
				break;
			default:
				Clear
				break;
		}
	}
	Clear2
	return 0;
}

void welcome(){
	Clear
	printf("\033[8;11H\033[1;33m1.加密字符串\033[8;37H2.解密字符\033[9;11H3.程序帮助\033[9;37H0.退出游戏\033[0m");
	menu("welcome", 1, 1);
	return;
}

void morse1() {
	Clear

	struct Input * pTemp = NULL;
	struct Input * pEnd = NULL;

	printf("请输入：\n");
	pEnd = pTemp = New();
	Clear
	while(pTemp != NULL) {
		switch (pTemp -> m) {
			case 'a':
			case 'A':
				printf(".-/");
				break;
			case 'b':
			case 'B':
				printf("-.../");
				break;
			case 'c':
			case 'C':
				printf("-.-./");
				break;
			case 'd':
			case 'D':
				printf("-../");
				break;
			case 'e':
			case 'E':
				printf("./");
				break;
			case 'f':
			case 'F':
				printf("..-./");
				break;
			case 'g':
			case 'G':
				printf("--./");
				break;
			case 'h':
			case 'H':
				printf("..../");
				break;
			case 'i':
			case 'I':
				printf("../");
				break;
			case 'j':
			case 'J':
				printf(".---/");
				break;
			case 'k':
			case 'K':
				printf("-.-/");
				break;
			case 'l':
			case 'L':
				printf(".-../");
				break;
			case 'm':
			case 'M':
				printf("--/");
				break;
			case 'n':
			case 'N':
				printf("-./");
				break;
			case 'o':
			case 'O':
				printf("---/");
				break;
			case 'p':
			case 'P':
				printf(".--./");
				break;
			case 'q':
			case 'Q':
				printf("--.-/");
				break;
			case 'r':
			case 'R':
				printf(".-./");
				break;
			case 's':
			case 'S':
				printf(".../");
				break;
			case 't':
			case 'T':
				printf("-/");
				break;
			case 'u':
			case 'U':
				printf("..-/");
				break;
			case 'v':
			case 'V':
				printf("...-/");
				break;
			case 'w':
			case 'W':
				printf(".--/");
				break;
			case 'x':
			case 'X':
				printf("-..-/");
				break;
			case 'y':
			case 'Y':
				printf("-.--/");
				break;
			case 'z':
			case 'Z':
				printf("--../");
				break;
			case '0':
				printf("-----/");
				break;
			case '1':
				printf(".----/");
				break;
			case '2':
				printf("..---/");
				break;
			case '3':
				printf("...--/");
				break;
			case '4':
				printf("....-/");
				break;
			case '5':
				printf("...../");
				break;
			case '6':
				printf("-..../");
				break;
			case '7':
				printf("--.../");
				break;
			case '8':
				printf("---../");
				break;
			case '9':
				printf("----./");	
				break;
			case '\n':
				printf("\n");
				break;
			default:
				break;
		}
		pEnd = pTemp;
		pTemp = pTemp -> pNext;
		free(pEnd);
	}
	pEnd = NULL;
	pTemp = NULL;
	printf("\n按Enter退出\n");
	input();
	return;
}

void morse2() {
	return;
}

void help() {
	int a;

	Clear
	menu2("帮助");
	a = input();
	if (a == 0x31) {
		Clear
		input();
	}
	return;
}

struct Input * New() {
	struct Input * pHead = NULL;
	struct Input * pNew,* pEnd;
	struct Input * pTemp;

	int exit = 1;

	pEnd = pNew = pHead = (struct Input *)malloc(sizeof(struct Input));
	pHead -> pNext = NULL;
	pHead -> m = 0x00;

	do {
		if (pEnd -> m != 0) {
			pNew = (struct Input *)malloc(sizeof(struct Input));
			pNew -> pNext = NULL;
			pEnd -> pNext = NULL;
		}
		pNew -> m = input();
		printf("%c",pNew -> m);
		if (pNew -> m == 0x1B) {
			free(pNew);
			exit = 0;
		}
		else if (pNew -> m == 0x7F) {
			free(pNew);
			if (pEnd == pHead) {
				if (pNew != pEnd) {
					free(pHead);
				}
				pEnd = pNew = pHead = (struct Input *)malloc(sizeof(struct Input));
				pHead -> pNext = NULL;
				pHead -> m = 0x00;
				printf("\n");
				Clear
				printf("请输入：\n");
				continue;
			}
			free(pEnd);
			printf("\n");
			Clear
			printf("请输入：\n");
			pTemp = pHead;
			while (pTemp -> pNext != NULL) {
				printf("%c",pTemp -> m);
				if (pTemp -> pNext == pEnd) {
					pTemp -> pNext = NULL;
					pEnd = pTemp;
					break;
				}
				pTemp = pTemp -> pNext;
			}
			pNew = NULL;
		}
		else {
			pEnd -> pNext = pNew;
			pEnd = pNew;
		}
	}while (exit);
	printf("\n");
	Clear
	return pHead;
}

