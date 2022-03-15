#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and then uppercase
 *
 * Description: A program thats alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;
j = 65;
for (i = 97; i < 123; i++)
{
putchar(i);
}
while (j < 91)
{
putchar(j);
j++;
}
putchar(10);
return (0);
}
