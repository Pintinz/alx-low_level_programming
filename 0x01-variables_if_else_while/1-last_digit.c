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
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
/* your code goes there */
if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lasDigit);
}
else if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lasDigit);
}
else
{
printf("Last digit of %d is %d and is greater than 5\n", n, lasDigit);
}
return (0);
}
