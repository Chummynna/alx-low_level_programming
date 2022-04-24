#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - casts random passwords
 * Return: zero
 */
int main(void)
{
	int sum;
	char x;

	srand(time(0))
	x = rand() % 128;
		sum += x;
		putchar(x);
	}
	putchar(2772 - sum);
	return (0);
}
