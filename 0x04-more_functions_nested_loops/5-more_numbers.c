#include <stdio.h>

void more_numbers(void)
{
		int row, col;

		for (row = 0; row <= 10; row++)
		{
			for (col = 0; col <= 14; col++)
			{	
				printf("%d", col);
			}
		
			putchar('\n')
		}
}	
