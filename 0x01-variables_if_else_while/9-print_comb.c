#include <stdio.h>
/**
 * main - print numbers
 *
 * Description: Print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(i);

if (i == 57)
{
  break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
