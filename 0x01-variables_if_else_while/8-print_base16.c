#include <stdio.h>
/**
 * main - this is the main fucntion
 * Return: must alwasy be xero
 */
int main(void)
{
	int  i;
	char j;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
