#include <stdio.h>
/**
 *  main - Entry point
 * Description: A program that prints single digits of base 10
 * Return: 0 if success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
