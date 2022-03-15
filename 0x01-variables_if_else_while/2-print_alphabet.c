#include <stdio.h>

/**
 * main - prints the letter of the alphabet
 *
 * Description: prints the letter of the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int i = 97;

while (i < 123)
{
putchar(i);
i++;
}
putchar(10);
return (0);
}
