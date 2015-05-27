/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include "ProjectEuler.h"

bool isprime(long long int val);


int main()
{
	int primecount = 1;
	long long int candidate = 1;
	while (primecount != 10001)
	{
		candidate += 2;
		if (isprime(candidate))
			primecount += 1;
	}
	printf("%d\n", candidate);

}

bool isprime(long long int val)
{
	if (val == 2 || val == 3)
		return true;
	if (val % 2 == 0)
		return false;

	for (long long int i = 3; i < val; i++)
	{
		if (val % i == 0)
			return false;
	}
	return true;
}