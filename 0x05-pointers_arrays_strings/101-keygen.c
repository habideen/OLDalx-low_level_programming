#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates valid random
 * passwords for the program 101-crackme
 * Return: 0
 */

int main(void)
{
	int x, sum, n;
	int code[100];

	sum = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		code[x] = rand() % 78;
		sum += (code[x] + '0');
		putchar(code[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
