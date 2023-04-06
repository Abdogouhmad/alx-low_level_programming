#include "main.h"
/*by div-styl*/
/**
 * is_prime_number - check the odd or prime number
 * @n: number that should  be checked
 * Return: either 0 for odd or 1 for prime
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_aid(n, 2));
}
/* by div-styl*/
/**
 * prime_aid - is helper to check the prime number is a prime one
 * @n: is the number that we want to check
 * @aid: is the helper numebr or the checker
 * Return: the number 0 if it is  composite or 1 if it is prime number
*/
int prime_aid(int n, int aid)
{
	if (aid * aid > n)
		return (1);
	else if (n % aid == 0)
		return (0);
	return (prime_aid(n, aid + 1));
}
