/*
Special Pythagorean Triplet

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

TODO: Program takes a while to complete. 
Shorten by shortening the looping algorithm.
*/

#include "ProjectEuler.h"

bool istriplet(int a, int b, int c);
bool sumis1000(int a, int b, int c);
int specialtriplet(void);

int main()
{
	int answer = 0;
	
	answer = specialtriplet();

		printf("answer is %d", answer);
	return 0;

}

int specialtriplet(void)
{
	for (int a = 1; a <= 1000; a++)
	{
		for (int b = 1; b <= 1000; b++)
		{
			for (int c = 1; c <= 1000; c++)
			{
				if (istriplet(a, b, c) && sumis1000(a, b, c))
				{
					return a*b*c;
				}
			}
		}
	}
}
bool sumis1000(int a, int b, int c)
{
	if (a + b + c == 1000)
		return true;
	else
		return false;
}

bool istriplet(int a, int b, int c)
{
	if (a*a + b*b == c*c)
		return true;
	else
		return false;
}