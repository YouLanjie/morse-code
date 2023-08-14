#include "../include/head.h"

void decryption()
{
	struct InputStruct *pHead = NULL;
	struct InputStruct *pEnd = NULL;
	struct InputStruct *pTemp = NULL;
	char m[10];

	clear();
	printw("请输入：\n");
	pTemp = New();
	clear();
	while (pTemp != NULL && pTemp->m != EOF && pTemp->m != '\0') {
		for (int i = 0; i < 10; i++) {
			m[i] = '\0';
		}
		pEnd = pTemp;
		for (int count = 0;
		     pTemp->m != '/' && pTemp->m != ' ' && pTemp->m != EOF
		     && count < 9 && pTemp->m != '\n' && pTemp->m != '\0';
		     count++) {
			if (count == 0) {
				m[0] = pTemp->m;
				m[1] = '\0';
			} else {
				m[strlen(m)] = pTemp->m;
				m[strlen(m) + 1] = '\0';
			}
			pEnd = pTemp;
			pTemp = pTemp->pNext;
			if (pTemp == NULL) {
				break;
			}

		}
		for (int count = 0; count < 36; count++) {
			if (strcmp(m, MorseCode[count]) == 0) {
				if (count + 97 < 123) {
					printw("%c", count + 97);
				} else if (count + 22 < 58) {
					printw("%c", count + 22);
				}
				if (pEnd->m == '\n') {
					printw("\n");
				}
				ctools_kbhitGetchar();
			}
		}
		if (pTemp == NULL) {
			break;
		} else {
			pTemp = pTemp->pNext;
		}
	}
	free(pHead);
	pHead = NULL;
	pEnd = NULL;
	pTemp = NULL;
	printw("\n按Enter退出\n");
	getch();
	return;
}
