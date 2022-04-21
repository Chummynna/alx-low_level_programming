#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: char type string
 * Return: integer coverted
 */

int _atoi(char *s)
{

int i;

	int sign = 1;
	unsign int num = 0;

	do {

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
			
		else if (num > 0)
			break;

	} while (s++);

	return (num * sign);
}
