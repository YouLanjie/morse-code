#include "../include/head.h"

char MorseCode[36][10] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};

int main() {
	int a=1;
	struct winsize size;
	int startSize = 0;

	printf("\033[?25l\n");
	Clear2
	while(a!=0) {
		Clear
		ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
		startSize = size.ws_col / 2 - 20;
		printf("\033[8;%dH\033[1;33m1.加密字符串\033[8;%dH2.解密字符\033[9;%dH3.程序帮助\033[9;%dH0.退出游戏\033[0m", startSize, startSize + 32, startSize, startSize + 32);
		Menu("welcome", 1, 1);
		a = Input();
		Clear
		switch(a) {
			case 0x31:
				encryption();
				break;
			case 0x32:
				decryption();
				break;
			case 0x33:
				help();
				break;
			case 0x1B:
			case 0x30:
				printf("\033[?25h\n");
				Clear2
				return 0;
				break;
			default:
				Clear
				break;
		}
	}
	printf("\033[?25h\n");
	Clear2
	return 0;
}

