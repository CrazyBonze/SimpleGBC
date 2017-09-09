#include"cpu.h"
bool stop_emulation()
{
  return true;
}

void time_sincronization()
{
  return;
}

int main()
{
  CPU cpu;
  while(!stop_emulation())
  {
    cpu.execute(1);
    time_sincronization();
  }
  return 0;
}
