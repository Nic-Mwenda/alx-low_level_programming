#include <stdio.h>
/**
 * main- entry point
 * Description: A program that prints lowercase alphabets in reverse
 * Return:0 if success
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
