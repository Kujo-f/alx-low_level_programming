#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
if (letters != 'q' && letters != 'e')
{
putchar(letters);
}
}
putchar('\n');
return (0);
}
