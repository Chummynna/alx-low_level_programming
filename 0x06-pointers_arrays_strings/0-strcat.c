#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: pointer to a character
 *@src: pointer to a character
 *Return: void
 */

char *_strcat(char *dest, char *src)
{
int j, k;

j = 0;
while (dest[j] != '\0')
{
j++;
}

k = 0;
while (src[k] != '\0')
{
dest[j] = src[k];
k++;j++;
}
dest[j] = '\0';

return (dest);
}
