/*
2520 is the smallest number that can be divided by each of the 
numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by 
all of the numbers from 1 to 20?
*/

#include "ProjectEuler.h"

bool isdivisible1to20(int val);

int main()
{
	int candidate = 19;
	bool found = false;
	while (found == false)
	{
		if (isdivisible1to20(candidate) == true)
			found = true;
		else
			candidate += 19;
	}
	printf("answer is %d\n", candidate);
	return 0;
}

bool isdivisible1to20(int val)
{
	for (int i = 20; i >=3; i--)
	{
		if (val % i != 0)
			return false;
	}
	return true;
}