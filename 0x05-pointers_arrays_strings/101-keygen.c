#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 */
int main(void)
{
int num;

srand(time(0));
num = rand();
printf("%c\n", num);
return (0);
}
