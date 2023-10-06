#include <stdio.h>
/**
 * main - main fctn
 * @alpha: character variable
 * Return: 0(Succes)
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
