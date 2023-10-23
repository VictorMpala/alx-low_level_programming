#include <stdio.h>
/**
 * main - main fctn
 * Return: 0(Success)
 *
 */
int main(void)
{
int i = 0;
char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
while (message[i] != '\0')
{
fwrite(2, &message[i], 1);
i++;
}
return (0);
}
