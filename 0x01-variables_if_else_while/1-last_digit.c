#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *  main - This contains all the code
 *  Return: 0 (successufl)
/* betty style doc for function main goes there */
int main(void)
{
int n;
int a;

srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
/* your code goes there */
if (a == 0)
{
printf("Last digit of %d is %d and is 0\n", n, a);
}
else if (a < 6 && a != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
}
else
{
printf("Last digit of %d is %d and is greater than 5\n", n, a);
}
return (0);
}
