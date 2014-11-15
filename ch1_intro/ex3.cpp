// According to legend, the German mathematician Karl Friedrich Gauss (1777–1855)
// began to show his mathematical talent at a very early age. When he was in
// elementary school, Gauss was asked by his teacher to compute the sum of the
// numbers between 1 and 100. Gauss is said to have given the answer instantly: 5050.
// Write a program that computes the answer to the question Gauss’s teacher posed.

#include <iostream>

using namespace std;

int SumBetweenNandOne(int n)
{
	return (0.5 * n * n) + (0.5 * n);
}

int main(int argc, char const *argv[])
{
	printf("Sum of all numbers 1 to 100 = %d\n", SumBetweenNandOne(100));
	printf("Sum of all numbers 1 to 234 = %d\n", SumBetweenNandOne(234));

	return 0;
}