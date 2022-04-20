#include "main.h
/**
 
 * swap_int - swap the variables of two integers a and b
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
