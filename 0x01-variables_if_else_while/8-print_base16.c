#include <stdio.h>
/**
  * main - Entry point
  * Description: A program that prints base 16 numbers
  * Return: 0 if success
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	for (num = 0; num < 6; num++)
	{
		putchar('a' + num);
	}
	putchar('\n');
	return (0);
}
