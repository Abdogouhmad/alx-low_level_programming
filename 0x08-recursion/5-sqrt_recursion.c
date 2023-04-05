#include "main.h"
#include <stdio.h>
/* by div-styl */
/**
 * _sqrt_recursion -returns the natural square root of a number.
 * @n: is the number that we are looking root sqr for
 * Return: return the root square
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (sqr_rt(n, 0));

}
/* by div-styl*/
/**
 * sqr_rt - fuction helps use to undintify the root square
 * @n: is the number we are looking for its root sqr
 * @sqrrtnum: is the number that will help use to find that sqr
 * Return: return the rt square.
*/
int sqr_rt(int n, int sqrrtnum)
{
	if (sqrrtnum * sqrrtnum > n)
		return (-1);
	else if (sqrrtnum * sqrrtnum == n)
		return (sqrrtnum);
	return (sqr_rt(n, sqrrtnum + 1));
}
