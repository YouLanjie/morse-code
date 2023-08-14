#include "../include/head.h"

void encryption() {
	struct InputStruct * pTemp = NULL;
	struct InputStruct * pEnd = NULL;

	clear();
	printw("请输入：\n");
	pEnd = pTemp = New();
	clear();
	while(pTemp != NULL) {
		switch (pTemp -> m) {
			case 'a':
			case 'A':
				printw("%s/",MorseCode[A]);
				break;
			case 'b':
			case 'B':
				printw("%s/",MorseCode[B]);
				break;
			case 'c':
			case 'C':
				printw("%s/",MorseCode[C]);
				break;
			case 'd':
			case 'D':
				printw("%s/",MorseCode[D]);
				break;
			case 'e':
			case 'E':
				printw("%s/",MorseCode[E]);
				break;
			case 'f':
			case 'F':
				printw("%s/",MorseCode[F]);
				break;
			case 'g':
			case 'G':
				printw("%s/",MorseCode[G]);
				break;
			case 'h':
			case 'H':
				printw("%s/",MorseCode[H]);
				break;
			case 'i':
			case 'I':
				printw("%s/",MorseCode[I]);
				break;
			case 'j':
			case 'J':
				printw("%s/",MorseCode[J]);
				break;
			case 'k':
			case 'K':
				printw("%s/",MorseCode[K]);
				break;
			case 'l':
			case 'L':
				printw("%s/",MorseCode[L]);
				break;
			case 'm':
			case 'M':
				printw("%s/",MorseCode[M]);
				break;
			case 'n':
			case 'N':
				printw("%s/",MorseCode[N]);
				break;
			case 'o':
			case 'O':
				printw("%s/",MorseCode[O]);
				break;
			case 'p':
			case 'P':
				printw("%s/",MorseCode[P]);
				break;
			case 'q':
			case 'Q':
				printw("%s/",MorseCode[Q]);
				break;
			case 'r':
			case 'R':
				printw("%s/",MorseCode[R]);
				break;
			case 's':
			case 'S':
				printw("%s/",MorseCode[S]);
				break;
			case 't':
			case 'T':
				printw("%s/",MorseCode[T]);
				break;
			case 'u':
			case 'U':
				printw("%s/",MorseCode[U]);
				break;
			case 'v':
			case 'V':
				printw("%s/",MorseCode[V]);
				break;
			case 'w':
			case 'W':
				printw("%s/",MorseCode[W]);
				break;
			case 'x':
			case 'X':
				printw("%s/",MorseCode[X]);
				break;
			case 'y':
			case 'Y':
				printw("%s/",MorseCode[Y]);
				break;
			case 'z':
			case 'Z':
				printw("%s/",MorseCode[Z]);
				break;
			case '0':
				printw("%s/",MorseCode[26]);
				break;
			case '1':
				printw("%s/",MorseCode[27]);
				break;
			case '2':
				printw("%s/",MorseCode[28]);
				break;
			case '3':
				printw("%s/",MorseCode[29]);
				break;
			case '4':
				printw("%s/",MorseCode[30]);
				break;
			case '5':
				printw("%s/",MorseCode[31]);
				break;
			case '6':
				printw("%s/",MorseCode[32]);
				break;
			case '7':
				printw("%s/",MorseCode[33]);
				break;
			case '8':
				printw("%s/",MorseCode[34]);
				break;
			case '9':
				printw("%s/",MorseCode[35]);
				break;
			case '\n':
				printw("\n");
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
	printw("\n按Enter退出\n");
	while (getch() != '\n');
	return;
}

