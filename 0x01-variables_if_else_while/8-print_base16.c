#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base16 in lowercase.
 * You can only use `putchar`, and only 3 times
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
	}
	for (a = 'b'; b <= 'f'; b++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
