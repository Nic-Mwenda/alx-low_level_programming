#include <stdio.h>
/**
 * printCombination - Print a combination of three numbers
 * followed by a comma and a space
 * @a: The first number
 * @b: The second number
 * @c: The third number
 * @lst: The last combination
 * Description: This function is used to print combinations of three numbers.
 */
void printCombination(int a, int b, int c, int lst)
{
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (!lst)
	{
		putchar(',');
		putchar(' ');
	}
}
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 * Description: A function that generates combinations of three
 * numbers from 0 to 9 and calls the printCombination function to print them.
 */
int main(void)
{
	int num1, num2, num3;
	int last = 0;

	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = num1 + 1; num2 <= 8; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				last = (num1 == 7 && num2 == 8 && num3 == 9);
				printCombination(num1, num2, num3, last);
			}
		}
	}

	putchar('\n');
	return (0);
}
