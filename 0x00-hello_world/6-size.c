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
printf(" Size of a char: %lu byte(s)\n",(unasigned long) sizeof(a));
printf(" Size of a int: %lu byte(s)\n", (unasigned long)sizeof(b));
printf(" Size of a long int: %lu byte(s)\n", (unasigned long)sizeof(c));
printf(" Size of a long long int: %lu byte(s)\n", (unasigned long)sizeof(d));
printf(" Size of a float: %lu byte(s)\n", (unasigned long)sizeof(f));
return (0);
}
