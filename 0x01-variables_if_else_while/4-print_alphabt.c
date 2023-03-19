#include <stdio.h>
#include <ctype.h>
/**
 * main- Print alphabet letters except q and e followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
