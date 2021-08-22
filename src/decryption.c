#include "../include/head.h"

void decryption() {
	struct InputStruct * pHead = NULL;
	struct InputStruct * pEnd = NULL;
	struct InputStruct * pTemp = NULL;
	char m[10];

	Clear2
	printf("请输入：\n");
	pTemp = New();
	Clear2
	while (pTemp -> m != EOF && pTemp != NULL) {
		for (int i = 0; i < 10; i++) {
			m[i] = '\0';
		}
		pEnd = pTemp;
		for (int count = 0; pTemp -> m != '/' && pTemp -> m != ' ' && pTemp -> m != EOF && count < 9 && pTemp -> m != '\n'; count++) {
			if (count == 0) {
				m[0] = pTemp -> m;
				m[1] = '\0';
			}
			else {
				m[strlen(m)] = pTemp -> m;
				m[strlen(m) + 1 ] = '\0';
			}
			pEnd = pTemp;
			pTemp = pTemp -> pNext;
			if (pTemp == NULL) {
				break;
			}
			
		}
		for (int count = 0; count < 36; count++) {
			if (strcmp(m, MorseCode[count]) == 0) {
				if (count + 97 < 123) {
					printf("%c",count + 97);
				}
				else if (count + 22 < 58) {
					printf("%c",count + 22);
				}
				if (pEnd -> m == '\n') {
					printf("\n");
				}
				KbhitNoTime();
			}
		}
		if (pTemp == NULL) {
			break;
		}
		else {
			pEnd = pTemp;
			pTemp = pTemp -> pNext;
		}
	}
	free(pHead);
	pHead = NULL;
	pEnd = NULL;
	pTemp = NULL;
	printf("\n按Enter退出\n");
	Input();
	return;
}
