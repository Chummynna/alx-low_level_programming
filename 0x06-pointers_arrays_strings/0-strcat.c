#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to a character
 * @src: pointer to a character
 * 
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int k;


	j = 0;

	while (dest[j] != 0)
	{
		j++;
	}

	k = 0;

	while (src[j] != 0)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	return (dest);
}
