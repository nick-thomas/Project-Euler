/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <stdbool.h>

bool isprime(long long int val);
bool isfactor(long long int dividend, long long int divisor);

long long int candidate = 0;
long long int bignum = 600851475143; //600851475143
long long int largestprime = 0;

int main()
{
	for (candidate = 3; candidate <= bignum; candidate += 2)
	{
		if (isfactor(bignum, candidate) && isprime(candidate))
		{
			largestprime = candidate;
			bignum = bignum / candidate;
		}
	}
	printf("largestprime is %lld\n", largestprime);

	return 0;
}

bool isfactor(long long int dividend, long long int divisor)
{
	if (dividend % divisor == 0)
		return true;
	else
		return false;
}

bool isprime(long long int val)
{		
	for(long long int i = 3; i < val; i++)
	{
		if (val % i == 0)
			return false;
	}
	return true;
}