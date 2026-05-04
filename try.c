#include <reg51.h>
unsigned char sine[50] =
{
    52, 57, 62, 66, 70, 74, 77, 80, 82, 84,
    85, 86, 86, 86, 85, 83, 81, 78, 75, 72,
    69, 65, 61, 56, 52, 48, 44, 39, 35, 31,
    28, 25, 22, 19, 17, 15, 14, 14, 14, 15,
    16, 18, 20, 23, 26, 30, 34, 38, 43, 48
};


void delay_us(unsigned int d)
{
    unsigned int i;
    for (i = 0; i < (d * 20); i++);
}


void main()
{
    int i;
    while (1)
    {
        for (i = 0; i < 50; i++)
        {
            P2 = sine[i];  
            delay_us(1);
        }
    }
}
