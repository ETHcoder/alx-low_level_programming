#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print numbers from 1 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
