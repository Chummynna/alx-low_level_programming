#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: num of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)

{
int *start_c, *end_c, c;
int j;


start_c = a;
end_c = a;


for (j = 0; j < n - 1; j++)
{
end_c++;
}




for (j = 0; j < n / 2; j++)
{


c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c++;
end_c--;
}

}
