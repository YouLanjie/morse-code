#include "../include/head.h"
#include <stdio.h>

int decryption(short a,struct Input * pTemp) {
	struct Input * pEnd = NULL;

	Clear2
	if (a == 0) {
		printf("请输入：\n");
		pTemp = New();
		Clear
	}
	pEnd = pTemp;
	if (pTemp -> m == '.') {
		if (decryption(1, pTemp) == 1 && a != 0) {
			return 1;
		}	
	}
	else if (pTemp -> m == '-' || pTemp -> m == '_') {
		if (decryption(1, pTemp) == 1 && a != 0) {
			return 1;
		}	
	}
	else if (a != 0 && ( pTemp -> m == '/' || pTemp -> m == ' ' )) {
		return 1;
	}
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
	pEnd = NULL;
	pTemp = NULL;
	printf("\n按Enter退出\n");
	input();
	return 0;
}

