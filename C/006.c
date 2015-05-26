/*
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 552 = 3025
Hence the difference between the sum of the squares of the first 
ten natural numbers and the square of the sum is 3025 ? 385 = 2640.

Find the difference between the sum of the squares of the first one 
hundred natural numbers and the square of the sum.
*/

#include <stdio.h>

int main()
{
	int sumofsquares = 0;
	int squareofsums = 0;
	

	for (int i = 1; i <= 100; i++)
	{
		sumofsquares += i*i;
		squareofsums += i;
	}
	squareofsums *= squareofsums;

	printf("Sum of squares (1-100) = %d\n", sumofsquares);
	printf("Square of sums (1-100) = %d\n", squareofsums);
	printf("Difference = %d\n", squareofsums - sumofsquares);
	return 0;

}