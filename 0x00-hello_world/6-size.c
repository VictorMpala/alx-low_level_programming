#include <stdio.h>
/**
 * main - prints the various types in C
 * Return:0 if the program executes succesfully
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;
	
	printf("Size of a char: %lu byte(s)", sizeof(x));	
	printf("Size of an int: %lu byte(s)", sizeof(y));	
	printf("Size of a long int: %lu byte(s)", sizeof(z));	
	printf("Size of a long long int: %lu byte(s)", sizeof(a));
	printf("Size of a float: %lu byte(s)", sizeof(b));
	return (0);
}
	
