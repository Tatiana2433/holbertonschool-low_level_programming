#include <stdio.h>

/**
 * main - afficher les chiffres
 * Return: zero
 */

int main(void)
{
int nombre = '0';
for (; nombre <= '9' ; nombre++)
{
putchar(nombre);
}
putchar('\n');
return (0);
}
