#include "../include/head.h"

char MorseCode[36][10] = {
	".-",     //a
	"-...",   //b
	"-.-.",   //c
	"-..",    //d
	".",      //e
	"..-.",   //f
	"--.",    //g
	"....",   //h
	"..",     //i
	".---",   //j
	"-.-",    //k
	".-..",   //l
	"--",     //m
	"-.",     //n
	"---",    //o
	".--.",   //p
	"--.-",   //q
	".-.",    //r
	"...",    //s
	"-",      //t
	"..-",    //u
	"...-",   //v
	".--",    //w
	"-..-",   //x
	"-.--",   //y
	"--..",   //z
	"-----",  //0
	".----",  //1
	"..---",  //2
	"...--",  //3
	"....-",  //4
	".....",  //5
	"-....",  //6
	"--...",  //7
	"---..",  //8
	"----."   //9
};

int main() {
	int input = 1;
	char *text[] = {
		"1.加密字符串",
		"2.解密字符",
		"3.程序帮助",
		"0.退出游戏",
	};

	printf("\033[?25l\n");
	Clear2
	while(input != '0') {
		Clear
		input = Menu("welcome", text, 4, 2);
		Clear
		switch(input) {
			case '1':
				encryption();
				break;
			case '2':
				decryption();
				break;
			case '3':
				help();
				break;
			case 0x1B:
			case '0':
			case '4':
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

