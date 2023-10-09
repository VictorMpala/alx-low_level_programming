#include <stdio.h>
/**
 * main - main fctn
 * Return: 0(Succes)
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'q' && alpha != 'e')
{
putchar(alpha);
}
}
putchar('\n');
return (0);
}

