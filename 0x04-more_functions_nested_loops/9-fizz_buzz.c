#include <stdio.h>

/**
 * main - it prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz.
 * for numbers which are multiples of both three and five print FizzBuzz
 * Return: always 0
 */

int main(void)
{
	int first_num  = 1;

	while (first_num <= 100)
	{
		if ((first_num % 3 == 0) && (first_num % 5 != 0))
		{
			char min[5] = "Fizz";

			printf("%s ", min);
		}
		else if ((first_num % 5 == 0) && (first_num % 3 != 0))
		{
			char min2[9] = "Buzz";

			printf("%s ", min2);
		}
		else if ((first_num % 3 == 0) && (first_num % 5 == 0))
		{
			char min_1[5] = "Fizz";
			char min_2[5] = "Buzz";

			printf("%s%s ", min_1, min_2);
		}
		else
		{
			printf("%d ", first_num);
		}
		first_num++;
	}
	printf("\n");
	return (0);
}
