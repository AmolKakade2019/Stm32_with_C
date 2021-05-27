==================================================
/* Modified linker script, for test executables.
   Reference c:\winavr-20100110\avr\bin\../lib\ldscripts/avr5.x
*/
OUTPUT_FORMAT("elf32-avr","elf32-avr","elf32-avr")
OUTPUT_ARCH(avr:5)
MEMORY
{
  text      (rx)   : ORIGIN = 0, LENGTH = 128K
  data      (rw!x) : ORIGIN = 0x800060, LENGTH = 0xffa0
  eeprom    (rw!x) : ORIGIN = 0x810000, LENGTH = 64K
  fuse      (rw!x) : ORIGIN = 0x820000, LENGTH = 1K
  lock      (rw!x) : ORIGIN = 0x830000, LENGTH = 1K
  signature (rw!x) : ORIGIN = 0x840000, LENGTH = 1K
}