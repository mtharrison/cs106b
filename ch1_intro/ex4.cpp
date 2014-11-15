// Write a program that reads in a positive integer N and then calculates and displays
// the sum of the first N odd integers. For example, if N is 4, your program should
// display the value 16, which is 1 + 3 + 5 + 7.

#include <iostream>

using namespace std;

int FistNOddNumbers(int n)
{
	return n * n;
}

int main(int argc, char const *argv[])
{
	int N;

	// Infinite loop

	while(1 == 1) {
		puts("Enter an integer or 0 to finish:");
		cin >> N;

		if(N == 0)
			break;

		printf("The sum of the first %d odd integers is: %d\n", N, FistNOddNumbers(N));
	}

	return 0;
}