#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers
* Return: 0
*/

int main(void)
{
	long t1 = 0, t2 = 1, nextTerm = 0, par = 0;

	for (nextTerm = 0; nextTerm <= 4000000; ++nextTerm)
	{
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;

		if ((nextTerm % 2) == 0)
			par = par + nextTerm;
	}
	printf("%ld\n", par);
	return (0);
}
