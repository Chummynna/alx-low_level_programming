#include "main.h"
/**
 * rev_string - pring reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
 */

void rev_string(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}

for [i = i - 1; i >= 0; i--)
{
_putchar (s[i]);
}

_putchar ('\n');
}
