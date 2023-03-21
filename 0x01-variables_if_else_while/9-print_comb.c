#include <stdio.h>
/**
 * main - this is the main fucntion
 * Return: must alwasy be xero
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= '9' ; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

