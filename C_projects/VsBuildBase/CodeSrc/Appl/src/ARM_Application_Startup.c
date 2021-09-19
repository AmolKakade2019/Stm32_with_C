#include<stdint.h>

#define SRAM_START 0x20000000
#define SRAM_SIZE (128U*1024U) //128KB
#define SRAM_END ((SRAM_START) + (SRAM_SIZE))

#define STACK_START SRAM_END
struct CodingData
{
    uint32_t ID;
    uint32_t type;
    char name;
};
struct CodingData coding_data_struct __attribute__((section(".code")));

void Reset_handler(void) __attribute__((section(".text")));

uint32_t vectorsp[] __attribute__((section(".isr_vector"))) = {
    STACK_START,
    (uint32_t)&Reset_handler,
};



void Reset_handler(void)
{
}