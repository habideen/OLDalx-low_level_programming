
#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
for (int counter = 0; counter <= 9; counter++)
{
for (int letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar(10);
}
}
