#include "tools.h"

enum Morse{A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z};

struct InputStruct {
        char m;
        struct InputStruct * pNext;
};

extern char MorseCode[36][10];

void encryption();
void decryption();
void help();

struct InputStruct * New();

