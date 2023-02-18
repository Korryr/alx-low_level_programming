#include <stdio.h>
/**
 * main - program printing various sizes
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int i;
	long int l;
	long long int k;
	float f;
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(k));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
