#ifndef MYFLAG_H
#define MYFLAG_H

#include <stdio.h>

extern bool colorFlag;
extern bool numberFlag;
extern int maskFlag;
extern int codeWFlag;





void changeColorFlag(bool inputColorFlag);

void changeMaskFlag(int inputMaskFlag);

void changeCodeWFlag(int inputcodeWFlag);

#endif


