#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
char m = 'a';
char u = 'A';
while (m <= 'z')
{
putchar(m);
m = m + 1;
}
while (u <= 'Z')
{
putchar(u);
u = u + 1;
}
putchar('\n');
return (0);
}
