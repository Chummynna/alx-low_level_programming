#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: pointer to a string
 *@src: A pointer to a string
 *@n: num of bytes
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
int j, k;

j = 0;
while (dest[j] != '\0')
{
j++;
}

k = 0;
while (k < n && src[k] != '\0')
{
dest[j] = src[k];
k++;
j++;
}

dest[j] = '\0';

return (dest);
}
