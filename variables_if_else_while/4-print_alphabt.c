#include <stdio.h>

/**
 * main - afficher l'alphabet
 * Return: zero
 */

int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
