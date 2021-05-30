ENTRY(Reset_handler)



MEMORY
{
    FLASH(rx)  : ORIGIN = 0x08000000, LENGTH = 512K
    SRAM1(rwx) : ORIGIN = 0x20000000, LENGTH = 116K
    SRAM2(rwx) : ORIGIN = 0x20000000+116K-4, LENGTH = 16K 
    /* can also be combined with SRAM block above*/
}

SECTIONS
{
    /* This section should include .text sections of all input files*/
    .text :
    {
        _stext = .; /*location counter value always counts VMA and not LMA*/
        *(.isr_vector)
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

    .code :
    {
        _sdata = .;
        *(.code)
        . = ALIGN(4);
        _edata = .;
    }> FLASH

    .bss :
    {
        _sbss = .;
        *(.bss)
        . = ALIGN(4);
        ebss = .;
    }> SRAM1
    /* no lma .. data only stored in RAM*/
}