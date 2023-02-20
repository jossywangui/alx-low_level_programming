#include <stdio.h>
/**
 * main -function
 *
 * Description : prints lowercase alphabets in reverse
 *
 * Return : 0 (always success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
