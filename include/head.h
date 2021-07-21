#include "include.h"

struct Input {
        int m;
        struct Input * pNext;
};

void welcome();
void morse1();
void morse2();
void help();

struct Input * New();
