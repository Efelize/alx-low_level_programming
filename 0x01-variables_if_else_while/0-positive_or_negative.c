#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main  -  print a random num
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is lessbthan 0: is negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
