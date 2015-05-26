/*
By considering the terms in the Fibonacci sequence whose values do not 
exceed four million, find the sum of the even-valued terms.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int twoago = 1;
	int oneago = 2;
	int current = 2;
	bool done = false;
	int sum = 0;
	
	while(done == false)
	{
	if (current > 4000000)
		done = true;
	if (done == false && current % 2 == 0)
		sum = sum+current;
	current = oneago + twoago;
	twoago = oneago;
	oneago = current;
	}
	printf("sum is %d\n", sum);
	
}
