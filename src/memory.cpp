typedef struct
{
  byte **main_mem;
  inline byte read_memory(word address)
  {
    return(main_mem[address>>13][address&0x1FFF]);
  }
} Memory;

