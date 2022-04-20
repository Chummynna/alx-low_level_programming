#include "main.h"

/**
 * _strlen - look for the length of a string
 * @s: pointer to the string to be updated
 *
 * Return: void
 */

int _strlen(char *s)
{
int e;

e = 0;
while (s[e] != '\0')
{
e++;
}
return (e);
}
