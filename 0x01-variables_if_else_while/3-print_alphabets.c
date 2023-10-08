#include <stdio.h>
#include <ctype.h>
/**
 * main- entry point
 * Description: A program that prints lowercase alphabets
 * Return:0 if success
 */
int main(void)
{
	char alph = 'a';

	char ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (ALPH <= 'Z')
	{
		putchar(toupper(ALPH));
		ALPH++;
	}
	putchar('\n');
	return (0);
}
