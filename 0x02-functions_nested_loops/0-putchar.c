#include "main.h"
/**
 * main -  Program to print _putchar
 * Return: will retun 0
 * File: 0-putchar.c
 * Author: Habideen Ibrahim
 */
int main(void)
{
	int a = 0;
	char str[] = "_putchar";

	while (a < 8)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
