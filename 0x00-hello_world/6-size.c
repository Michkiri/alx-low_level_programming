#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char a;
	int b;
	long int c;
	long long intd d;
	float f;

	printf("Size of a char: %d bytes(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(d));
	printf("Size of a float: %d bytes(s)\n", sizeof(f));
	return (0);

}
