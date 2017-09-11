#include"stdint.h"
typedef unsigned char byte;
typedef unsigned short word;
typedef union
{
  struct
  {
    byte L, H;
  } B;
  word W;
} Register;
