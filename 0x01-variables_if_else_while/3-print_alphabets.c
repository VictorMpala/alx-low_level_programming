#include <stdio.h>
/**
 * main - main fctn
 * Return: 0(Succes)
 */
int main(void)
{
char al;
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
for (al = 'A'; al <= 'Z'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}

