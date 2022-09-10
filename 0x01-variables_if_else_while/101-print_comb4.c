#include <stdio.h>
/**
 * main - main block
 * Description: prints all possible different combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
 * The three digits must be different
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * You can only use the putchar function (every other function 
 * You can only use putchar six times maximum in your code
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int y, x, z, w;

	for (y = 0; y < 1000; y++)
	{
		x = y / 100; /* hundreds */
		z = (a / 10) % 10; /* tens */
		w = a % 10; /* singles */

		if (x < z && z < w)
		{
			putchar(x + '0');
			putchar(z + '0');
			putchar(w + '0');

			if (y < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
