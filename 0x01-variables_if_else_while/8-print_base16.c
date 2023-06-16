#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0  (success)
 */
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}

putchar('\n');

return (0);
}

