#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 program execures correctlt
 */
int main(void)
{
	int n;
	int lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastD = n % 10;
	printf("Last digit of %d is %d and is ", n, lastD);
	if (lastD > 5)
		printf("greater than 5\n");
	else if (lastD == 0)
		printf("0\n");
	else
		printf("less than 6 but not 0\n");
	return (0);
}
