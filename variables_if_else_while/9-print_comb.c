#include <stdio.h>

int main(void)
{
for (int chiffre = 0; chiffre <= 8; chiffre++)
{
putchar(chiffre + '0');
putchar(',');
putchar(' ');
}
putchar('9');
putcher('\n');
return (0);
}
