#include "cpu.h"

CPU::CPU()
{
  _PC.W = 0x0000;
  _SP.W = 0x0000;
  _AF.W = 0x0000;
  _BC.W = 0x0000;
  _DE.W = 0x0000;
  _HL.W = 0x0000;
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
