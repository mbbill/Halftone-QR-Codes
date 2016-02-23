#include "qrFlag.h"
bool colorFlag=0;
int codeWFlag=0;
int maskFlag=-1;

void changeColorFlag(bool inputColorFlag){
  colorFlag=inputColorFlag;
}
void changeMaskFlag(int inputMaskFlag){
  maskFlag=inputMaskFlag;
}

void changeCodeWFlag(int inputcodeWFlag){
  codeWFlag=inputcodeWFlag;
}