#include <stdio.h>
/**
 * main - this is the main fucntion
 * Return: must alwasy be xero
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i == 'q' || i == 'e')
			i = i + 1;
		else
			putchar(i);
	putchar('\n');
	return (0);
}

