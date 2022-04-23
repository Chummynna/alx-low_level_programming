#include "main.h"

/**
 * print_number - prints an integer.
 * @n: enter integer.
 * Return: no return.
 */
void print_number(int n)
{
unsigned int e, f, count;

if (n < 0)
{
_putchar(45);
e = n * -1;
}
else
{
e = n;
}

f = e;
count = 1;

while (f > 9)
{
f /= 10;
count *= 10;
}

for (; count >= 1; count /= 10)
{
_putchar(((e / count) % 10) + 48);
}
}
