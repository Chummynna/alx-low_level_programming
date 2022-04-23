#include "main.h"
/**
 * leet - encodes a string
 * @str: the string to encode
 *
 * Return: the encode string
 */
char *leet(char *str)
{
	int b, d;
	char s[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	b = 0;
	while (str[b] != '\0')
	{
		d = 0;
		while (s[d] != '\0')
		{
			if (str[b] == c[d])
			{
				str[b] = n[d];
			}
			d++;
		}
		b++;
	}
	return (str);
}
