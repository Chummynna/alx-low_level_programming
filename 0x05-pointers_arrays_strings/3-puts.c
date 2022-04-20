#include "main.h"
/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 *
 * Return: void
 */

void _puts(char *str)
{
int g = 0;

while (str[g])
{
_putchar (str[g]);
g++;
}
_putchar('\n');
}
