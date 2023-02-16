#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf(" Size of a char: %2d byte(s)\n",(unsigned long) sizeof(a));
printf(" Size of a int: %2d byte(s)\n", (unsigned long)sizeof(b));
printf(" Size of a long int: %2d byte(s)\n", (unsigned long)sizeof(c));
printf(" Size of a long long int: %2d byte(s)\n", (unsigned long)sizeof(d));
printf(" Size of a float: %2d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
