#include "../include/head.h"

void encryption() {
	struct Input * pTemp = NULL;
	struct Input * pEnd = NULL;

	Clear
	printf("请输入：\n");
	pEnd = pTemp = New();
	Clear
	while(pTemp != NULL) {
		switch (pTemp -> m) {
			case 'a':
			case 'A':
				printf("%s/",MorseCode[A]);
				break;
			case 'b':
			case 'B':
				printf("%s/",MorseCode[B]);
				break;
			case 'c':
			case 'C':
				printf("%s/",MorseCode[C]);
				break;
			case 'd':
			case 'D':
				printf("%s/",MorseCode[D]);
				break;
			case 'e':
			case 'E':
				printf("%s/",MorseCode[E]);
				break;
			case 'f':
			case 'F':
				printf("%s/",MorseCode[F]);
				break;
			case 'g':
			case 'G':
				printf("%s/",MorseCode[G]);
				break;
			case 'h':
			case 'H':
				printf("%s/",MorseCode[H]);
				break;
			case 'i':
			case 'I':
				printf("%s/",MorseCode[I]);
				break;
			case 'j':
			case 'J':
				printf("%s/",MorseCode[J]);
				break;
			case 'k':
			case 'K':
				printf("%s/",MorseCode[K]);
				break;
			case 'l':
			case 'L':
				printf("%s/",MorseCode[L]);
				break;
			case 'm':
			case 'M':
				printf("%s/",MorseCode[M]);
				break;
			case 'n':
			case 'N':
				printf("%s/",MorseCode[N]);
				break;
			case 'o':
			case 'O':
				printf("%s/",MorseCode[O]);
				break;
			case 'p':
			case 'P':
				printf("%s/",MorseCode[P]);
				break;
			case 'q':
			case 'Q':
				printf("%s/",MorseCode[Q]);
				break;
			case 'r':
			case 'R':
				printf("%s/",MorseCode[R]);
				break;
			case 's':
			case 'S':
				printf("%s/",MorseCode[S]);
				break;
			case 't':
			case 'T':
				printf("%s/",MorseCode[T]);
				break;
			case 'u':
			case 'U':
				printf("%s/",MorseCode[U]);
				break;
			case 'v':
			case 'V':
				printf("%s/",MorseCode[V]);
				break;
			case 'w':
			case 'W':
				printf("%s/",MorseCode[W]);
				break;
			case 'x':
			case 'X':
				printf("%s/",MorseCode[X]);
				break;
			case 'y':
			case 'Y':
				printf("%s/",MorseCode[Y]);
				break;
			case 'z':
			case 'Z':
				printf("%s/",MorseCode[Z]);
				break;
			case '0':
				printf("%s/",MorseCode[26]);
				break;
			case '1':
				printf("%s/",MorseCode[27]);
				break;
			case '2':
				printf("%s/",MorseCode[28]);
				break;
			case '3':
				printf("%s/",MorseCode[29]);
				break;
			case '4':
				printf("%s/",MorseCode[30]);
				break;
			case '5':
				printf("%s/",MorseCode[31]);
				break;
			case '6':
				printf("%s/",MorseCode[32]);
				break;
			case '7':
				printf("%s/",MorseCode[33]);
				break;
			case '8':
				printf("%s/",MorseCode[34]);
				break;
			case '9':
				printf("%s/",MorseCode[35]);
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

