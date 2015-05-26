/*
A palindromic number reads the same both ways. The largest palindrome 
made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

TODO:
ispalindrome function currently only works for 6 digit values.
To be more complete, it should work for 5 and 6 digit values.
*/

#include <stdio.h>
#include <stdbool.h>

bool ispalindrome(int val);
int largest = 0;

int main()
{
	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			if (i*j > largest && ispalindrome(i*j))
				largest = i*j;
		}
	}
	printf("Largest palindrome is %d\n", largest);
}

bool ispalindrome(int val)
{
	int firstdigit = val % 10;
	val = (val - firstdigit) / 10;
	int seconddigit = val % 10;
	val = (val - seconddigit) / 10;
	int thirddigit = val % 10;
	val = (val - thirddigit) / 10;
	int fourthdigit = val % 10;
	val = (val - fourthdigit) / 10;
	int fifthdigit = val % 10;
	val = (val - fifthdigit) / 10;
	int sixthdigit = val % 10;

	if (firstdigit == sixthdigit && seconddigit == fifthdigit &&
		thirddigit == fourthdigit)
		return true;
	else
		return false;
}