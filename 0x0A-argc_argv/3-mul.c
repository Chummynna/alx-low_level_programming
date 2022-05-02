#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the programs that multiplies two integers
 * @argc: insert argument
 * @argv: argument count
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int x, y;
if (argc == 3)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x *y);
return (0);
}
printf("Error\n");
return (1);
}
