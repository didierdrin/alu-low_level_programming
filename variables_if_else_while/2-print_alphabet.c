#include <stdio.h>

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter+"\n");
		letter++;
	}
	return (0);
}

