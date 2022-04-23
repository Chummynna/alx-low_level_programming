#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: returns char
 */


char *string_toupper(char *str)
{
int j;

for (j = 0; str[j] != '\0'; j++)
{
if (str[j] >= 'c' && str[j] <= 'x')
{
str[j] = str[j] - 32;
}
}

return (str);
}
