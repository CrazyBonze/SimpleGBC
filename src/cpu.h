#ifndef CPU_H
#define CPU_H

#include"register.cpp"
#include"memory.cpp"

class CPU
{
  public:
    CPU();
    int execute(int cycles);
  private:
    Register _AF;           // Register AF (Accumulator + Flags)
    Register _BC;           // Register BC (B + C)
    Register _DE;           // Register DE (D + E)
    Register _HL;           // Register HL (H + L)

    uint16_t _PC;           // Program Counter
    uint16_t _SP;           // Stack Pointer
    uint32_t _flag_C;       // Carry flag
    uint32_t _flag_ZPS;     // Zero, Parity and Negative flags
    uint32_t _flag_Ac;      // Auxilary Carry flag (4-bit carry)

    uint32_t _halted;       // CPU is in halt state
    uint32_t _int_enabled;  // Interupts are enabled or disabled
    uint32_t _int_pending;  // If there is a pending interrupt
    uint16_t _int_address;  // Stores the start address of the interupt
    uint16_t _NMI_address;  // Stores the start address for the NMI rutine
    uint32_t _NPI_pending;  // If there is a pending NMI rutine

    uint32_t _cycle_count;          // Number of executed cycles
    uint32_t _opcode_history[256];  // Opcode stats
    uint32_t _PC_history[256];      // Program Counter history
    uint32_t _trace_index;          // Last entry in the PC trace buffer

    Memory _main_mem;

    int interpret_opcode();
    static const unsigned int CPU_FREQ = 4194304;
};

#endif // CPU_H
