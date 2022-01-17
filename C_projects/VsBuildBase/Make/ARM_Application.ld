ENTRY(Reset_handler)
__MAX_HEAP_SIZE = 0x400;
__MAX_STACK_SIZE = 0x1024;

MEMORY
{
    FLASH(rx)  : ORIGIN = 0x08000000,        LENGTH = 512K
    SRAM1(rw)  : ORIGIN = 0x20000000,        LENGTH = 112K
    SRAM2(rw)  : ORIGIN = 0x20000000+112K-4, LENGTH = 16K 
    /* can also be combined with SRAM block above*/
}

SECTIONS
{
    /* This section should include .text sections of all input files*/
    .text :
    {
        _stext = .; /*location counter value always counts VMA and not LMA*/
        *(.isr_vector)
        *(.AppLabel)
        *(.text)
        *(.rodata)
        /*. = ALIGN(4);*/
        _etext = .;
    }> FLASH AT> FLASH
    /* same as of >FLASH, as VMA and LMA is same*/

    .data :
    {
        _sdata = .;
        *(.data)
        . = ALIGN(4);
        _edata = .; 
    }> SRAM1 AT> FLASH

    .bss :
    {
        _sbss = .;
        *(.bss)
        . = ALIGN(4);
        _ebss = .;
    }> SRAM1
    /* no lma .. data only stored in RAM*/
}