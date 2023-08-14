#include "../include/head.h"

static void print_ch(int ch)
{
	printw("%c", ch);
	attron(COLOR_PAIR(1));
	printw(" ");
	attroff(COLOR_PAIR(1));
	printw("\b");
	return;
}

struct InputStruct *New()
{
	struct InputStruct *pHead = NULL;
	struct InputStruct *pNew, *pEnd;
	struct InputStruct *pTemp;

	int exit = 1;

	pEnd = pNew = pHead =
	    (struct InputStruct *)malloc(sizeof(struct InputStruct));
	pHead->pNext = NULL;
	pHead->m = 0x00;

	init_pair(1, COLOR_BLACK, COLOR_WHITE);
	print_ch(0);
	do {
		if (pEnd->m != 0) {
			pNew =
			    (struct InputStruct *)
			    malloc(sizeof(struct InputStruct));
			pNew->pNext = NULL;
			pEnd->pNext = NULL;
		}
		pNew->m = getch();
#define Key_Esc 0x1B
		if (pNew->m == Key_Esc) {
			if (ctools_kbhit() != 0) {
				getchar();
				getchar();
				continue;
			}
			if (pNew != pHead) {
				free(pNew);
			}
			exit = 0;
#define Key_Backspace 0x7F
		} else if (pNew->m == Key_Backspace) {
			free(pNew);
			if (pEnd == pHead) {
				if (pNew != pEnd) {
					free(pHead);
				}
				pEnd = pNew = pHead =
				    (struct InputStruct *)
				    malloc(sizeof(struct InputStruct));
				pHead->pNext = NULL;
				pHead->m = 0x00;
				clear();
				printw("请输入：\n");
				print_ch(0);
				continue;
			}
			free(pEnd);
			clear();
			printw("请输入：\n");
			pTemp = pHead;
			while (pTemp->pNext != NULL) {
				print_ch(pTemp->m);
				if (pTemp->pNext == pEnd) {
					pTemp->pNext = NULL;
					pEnd = pTemp;
					break;
				}
				pTemp = pTemp->pNext;
			}
			pNew = NULL;
		} else {
			print_ch(pNew->m);
			pEnd->pNext = pNew;
			pEnd = pNew;
		}
	} while (exit);
	clear();
	return pHead;
}
