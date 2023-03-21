#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char i;

	while (c < 10)
	{

		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
		c++;
	}
}
