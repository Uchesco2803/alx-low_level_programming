#include <stdio.h>
/**
 * main- Program to print letters in reverse followed by new line
 *
 * Return: 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
