#include "include.h"

struct Input {
        int m;
        struct Input * pNext;
};

void encryption();
int decryption(short a,struct Input * pTemp);
void help();

struct Input * New();

