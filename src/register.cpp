#include"stdint.h"
typedef union
{
  uint32_t w;
  uint16_t e;
  struct
  {
    uint8_t l, h;
    uint16_t pad;
  } b;
} Register;
