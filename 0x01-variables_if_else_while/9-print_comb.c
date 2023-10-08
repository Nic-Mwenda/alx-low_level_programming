#include <stdio.h>
/**
  * main-Entry point
  * Description: a program that prints digits (0, 1, 2, ...9)
  * Return: 0 if success
  */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		{
			if (num < 9)
				putchar(',');
			if (num < 9)
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
