#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
char p = 'a';
while (p <= 'z')
{
if (p == 'q')
{
p = p + 1;
}
else if (p == 'e')
{
p = p + 1;
}
else
{
putchar(p);
p = p + 1;
}
}
putchar('\n');
return (0);
}
