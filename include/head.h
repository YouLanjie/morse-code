#include "include.h"

struct Input {
        int m;
        struct Input * pNext;
};

void encryption();
void decryption();
void help();

struct Input * New();

