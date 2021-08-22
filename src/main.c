#include "../include/head.h"

char MorseCode[36][10] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};

int main() {
	int a=1;

	printf("\033[?25l\n");
	Clear2
	while(a!=0) {
		Clear
		printf("\033[8;11H\033[1;33m1.加密字符串\033[8;37H2.解密字符\033[9;11H3.程序帮助\033[9;37H0.退出游戏\033[0m");
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

