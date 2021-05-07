#include <stdio.h>                           //标准库
#include <string.h>                          //strcmp();
#include <stdlib.h>                          //system();srand();rand();
//#include <unistd.h>                          //sleep();
//#include <time.h>                            //time(NULL);

#include "kbhit_input.h"
#include "menu.h"

#define Clear system("clear");

struct Input {
        int m;
        struct Input * pNext;
};

void welcome();
void morse1();
void morse2();
void help();

struct Input * New(int * count);
