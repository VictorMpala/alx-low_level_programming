#include <stdio.h>
/**
 * main - main fctn
 * Return: 0(Succes)
 */
int main(void)
{
char alpha;
char ch_2;
for (alpha = 48; alpha <= 57; alpha++)
{
for (ch_2 = 48; ch_2 <= 57; ch_2++)
{
putchar(alpha);
putchar(ch_2);
putchar(',');
putchar(' ');
}
}
return (0);
}

