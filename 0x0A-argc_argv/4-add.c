#include <stdio.h>

#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: print command line arguments.
 * @argv: add the array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
int x, y, add = 0;

for (x = 1; y < argc; x++)
{
for (y = 0; argv[x][y] != '\0'; y++)
{
if (!isdigit(argv[x][y]))
{
printf("Error\n");
return (1);
}
add += atoi(argv[x]);
}
printf("%d\n", add);
return (0);
}
