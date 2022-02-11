#include <stdlib.h>
#include <stdio.h>
#include "palindrome.h"
/**
*is_palindrome - a function that checks whether or not a given unsigned
*integer is a palindrome.
*@n: The number to be checked
*Return: 1 or 0
 */

int is_palindrome(unsigned long n)
{
    int rn = 0, r, o = n;

    	while (n != 0)
	{
		r = n % 10;
		rn = rn * 10 + r;
		n /= 10;
	}
	if (o == rn)
		return (1);
	else
		return (0);
}
