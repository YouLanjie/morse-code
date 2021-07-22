#include "../include/head.h"

void help() {
	int a;

	Clear
	menu2("帮助");
	a = input();
	if (a == 0x31) {
		Clear
		input();
	}
	return;
}

