#include <stdio.h>

/**
 * main - afficher l'alphabet et les chiffres
 * Return: zero
 */

int main(void)
{
for (int chiffre = 0; chiffre <= 9; chiffre++)
{
putchar(chiffre + '0');
}
for (char lettre = 'a' ; lettre <= 'e' ; lettre++)
{
putchar(lettre);
}
putchar('\n');
return (0);
}
