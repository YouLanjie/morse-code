#include "../include/head.h"

void help() {
	int a;

	Clear
	Menu3("帮助");
	a = getch();
	if (a == 0x31) {
		Clear
		getch();
	}
	return;
}

