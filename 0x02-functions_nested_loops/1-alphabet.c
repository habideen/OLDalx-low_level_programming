#include "main.h"
/**
*print_alphabet - function that print english alphabet
*it prints in lowercase
*Return: this has no return
*/
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; ++letter)
{
_putchar (letter);
}

_putchar (10);
}
