#include "main.h"

/**
 * puts_half - prints a string, followed by a new line
 * @str: pointer to the string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
int b, last;

b = 0;
while (str[b] != '\0')
{
b++;
}

last = (b + 1) / 2;

for (b = last; str[b]; b++)
{
_putchar (str[b]);
}

_putchar ('\n');

}
