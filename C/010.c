/*
Summation of Primes

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>
#include <stdbool.h>

bool isprime(int val);

int main()
{
	long long int sum = 2;
	for (int i = 3; i < 2000000; i += 2)
	{
		if (isprime(i))
		{
			sum += i;
		}
	}
	printf("%lli\n", sum);
}

bool isprime(int val)
{
	if (val == 2 || val == 3)
		return true;
	if (val % 2 == 0)
		return false;

	for (long long int i = 3; i*i <= val; i++)
	{
		if (val % i == 0)
			return false;
	}
	return true;
}