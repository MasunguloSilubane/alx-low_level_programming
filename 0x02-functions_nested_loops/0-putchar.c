#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char ermias[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(ermias[i]);
	_putchar('\n');

	return (0);
}
