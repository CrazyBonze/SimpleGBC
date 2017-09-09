#include "cpu.h"

CPU::CPU() :
  _PC(0x100),
  _SP(0xfffe)
{
}
int CPU::execute(int cycles)
{
  for(int i = 0; i < cycles; ++i)
  {
  }
  return 0;
}

int CPU::interpret_opcode()
{
  switch(1)
  {
  }
  return 0;
}
