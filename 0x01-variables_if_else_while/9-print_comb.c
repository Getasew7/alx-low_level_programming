#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: prints all single number of base 10
 * starting from 0, follwed by a new line
 * Return: 0
 */

int main(void)
{
	int c = 0;
	while (c < 10)
	{
		putchar(48 + c);
		if (c !=9)
		{
			putchar(",");
			putchar(" ");
		}
		c++;
	}
}
