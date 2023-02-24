#include "main.h"
/*
 * _isupper - upper case letters
 *
 * return; 0 always success
 */
int _isupper(int c)
{
i
	char c;

	if (c  >= 'A' && <= 'Z')
		return (1);
	else
		return (0);
