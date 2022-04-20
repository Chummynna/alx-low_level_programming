#iclude "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int g = 0;

	while (s[g])
		g++;

	while (g--)
	{
		_putchar(s[g]);
	}

	_putchar('\n');

}
