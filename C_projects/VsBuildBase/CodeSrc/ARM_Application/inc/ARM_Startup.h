#pragma once
#include<stdint.h>
#include"EcuMemoryMap.h"
struct CodingData
{
    uint32_t ID;
    uint32_t type;
    char name;
};
struct CodingData coding_data_struct __attribute__((section(".code")));

void Reset_handler(void) __attribute__((section(".text")));
void NMI_handler(void) __attribute__((weak, section(".text"), alias("Default_handler")));
void HardFault_handler(void) __attribute__((weak, section(".text"), alias("Default_handler")));
void Default_handler(void) __attribute__((section(".text")));

uint32_t vectorsp[] __attribute__((section(".isr_vector"))) = {
    STACK_START,
    (uint32_t)&Reset_handler,
    (uint32_t)&NMI_handler,
    (uint32_t)&HardFault_handler,
};