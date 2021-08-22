#include "../include/head.h"

void help() {
	int a;

	Clear
	Menu2("帮助");
	a = Input();
	if (a == 0x31) {
		Clear
		Input();
	}
	return;
}

