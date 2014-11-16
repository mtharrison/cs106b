// Write a program that reads in a list of integers from the user until the user enters the
// value 0 as a sentinel. When the sentinel appears, your program should display the
// largest value in the list, as illustrated in the following sample run:
// 
//  This program finds the largest integer in a list.
//  Enter 0 to signal the end of the list.
//  ? 17
//  ? 42
//  ? 11
//  ? 19
//  ? 35
//  ? 0
//  The largest value is 42

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	int max = 0;

	// Infinite loop

	while(1 == 1) {
		printf("? ");
		cin >> N;

		if (N == 0) {
			break;
		}

		if (N > max) {
			max = N;
		}

	}

	printf("The largest value is %d\n", max);

	return 0;
}