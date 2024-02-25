#include <stdio.h>

/**
 *main - utiliser la fonction putchar
 *Return:zero
 */

int main(void)
{
int chiffre = 0;
while (chiffre <= 9)
{
putchar(chiffre + '0');
chiffre++;
}
putchar('\n');
return (0);
}
