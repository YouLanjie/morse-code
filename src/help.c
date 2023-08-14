#include "../include/head.h"

const extern ctools_menu CT_MENU;

void help() {
	struct ctools_menu_t *data = NULL;
	CT_MENU.data_init(&data);
	CT_MENU.set_title(data, "帮助");
	CT_MENU.set_text(data, "即将上线", "敬请期待", "按下'q'退出", NULL);
	CT_MENU.set_type(data, "help");
	CT_MENU.show(data);
	return;
}

