#include <stdio.h>
#include <include.h>
#include <time.h>
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > e)
	{
		printf("%d is positive\n", n);
	}
	else if (n --0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
