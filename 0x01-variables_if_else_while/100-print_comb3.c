#include <stdio.h>
/**
 * main - main block
 * Description: prints all possible different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * you can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int y, x, z;

	y = 0;

	while (y < 100)
	{
		x = y % 10; /* single digit */
		z = y / 10; /* double digits */

		if (y < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}

	y++;
}
putchar('\n');

return (0);
}
