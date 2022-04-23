#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: pointer to dest.
 */


char *cap_string(char *c)
{
int count = 0, j;
int separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

if (*(c + count) >= 97 && *(c + count) <= 122)
*(c + count) = *(c + count) - 32;
count++;
while (*(c + count) != '\0')
{
for (j = 0; j < 13; j++)
{
if (*(c + count) == separators[j])
{
if ((*(c + (count + 1)) >= 97) && (*(c + (count + 1)) <= 122))
*(c + (count + 1)) = *(c + (count + 1)) - 32;
break;
}
}
count++;
}
return (c);
}
