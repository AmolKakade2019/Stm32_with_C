#define DDRB (*(volatile unsigned char*)0x24)
#define PORTB (*(volatile unsigned char*)0x25)

int main()
{
    DDRB = 32; // set pin 5 as output

    while (1)
    {
        for (long i=0;i<10000;i++)
        {
            PORTB = 32;
        }
        for (long j = 0; j < 100000; j++)
        {
            PORTB = 0;
        }
    }
}