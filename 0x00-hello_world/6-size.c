#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A c program that uses sizeof function
 *
 * Return: 0 (success)
*/

int main(void)
{
	char c;
	int i;
	long int x;
	long long int y;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(x));
	printf("Size of a long long int: %d byte(s)\n", sizeof(y));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
