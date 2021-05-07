#include "headfile/head.h"

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
			case 0x30:
				Clear
				return 0;
				break;
			default:
				Clear
				break;
		}
	}
	Clear
	return 0;
}

void welcome(){
	Clear
	menu("welcome");
	printf("\033[8;11H\033[1;33m1.加密字符串\033[8;37H2.解密字符\033[9;11H3.程序帮助\033[9;37H0.退出游戏\033[0m");
	Menu
	return;
}

void morse1() {
	Clear
	int count = 0;
	int i = 0;

	struct Input * pHead = NULL;
	struct Input * pTemp = NULL;

	printf("请输入：\n");
	pTemp = pHead = New(&count);
	Clear
	while(i < count) {
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
		pTemp = pTemp -> pNext;
		i++;
	}
	free(pHead);
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
	Menu2
	a = input();
	if (a == 0x31) {
		Clear
		input();
	}
	return;
}

struct Input * New(int * count) {
	struct Input * pHead = NULL;
	struct Input * pNew,* pEnd;

	int exit = 1;

	if(*count == 0) {
		pEnd = pNew = pHead = (struct Input *)malloc(sizeof(struct Input));
	}
	do {
		*count += 1;
		if (*count == 1) {
			pNew -> pNext = NULL;
		}
		else {
			pNew = (struct Input *)malloc(sizeof(struct Input));
			pNew -> pNext = NULL;
			pEnd -> pNext = pNew;
			pEnd = pNew;
		}
		pNew -> m = input();
		printf("%c",pNew -> m);
		if (pNew -> m == 0x1B) {
			pEnd -> pNext = NULL;
			free(pNew);
			*count -= 1;
			exit = 0;
		}
	}while (exit);
	printf("\n");
	Clear
	return pHead;
}
