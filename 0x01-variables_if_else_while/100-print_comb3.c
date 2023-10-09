#include <stdio.h>
/**
  * main-Entry point
  * Description: A program that prints two different combination of digits
  * Return: 0 if success
  */
int main(void)
{
	int num1, num2;
	int count = 0;

	for (num1 = 0; num1 <= 8; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			count++;
			if (count < 45)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
