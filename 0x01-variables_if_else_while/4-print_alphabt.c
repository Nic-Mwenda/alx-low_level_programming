#include <stdio.h>
/**
 * main- entry point
 * Description: A program that prints lowercase alphabets except q $ e
 * Return:0 if success
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'q' && alph != 'e')
			putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
