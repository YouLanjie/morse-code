#include "../include/head.h"
#include <curses.h>

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

const extern ctools_menu CT_MENU;

int main() {
	int input = 1;
	const ctools_menu *p = &CT_MENU;
	struct ctools_menu_t *data = NULL;

	p->ncurses_init();
	p->data_init(&data);
	p->set_title(data, "welcome");
	p->set_text(data, "1.加密字符串", "2.解密字符", "3.程序帮助", "0.退出游戏", NULL);

	while(input != 'q') {
		input = p->show(data);
		switch(input) {
			case 1:
				encryption();
				break;
			case 2:
				decryption();
				break;
			case 3:
				help();
				break;
			case 0x1B:
			case 0:
			case 4:
				endwin();
				return 0;
				break;
			default:
				break;
		}
	}
	endwin();
	return 0;
}

