// Using the DigitSum function from the section entitled “The while statement” as a
// model, write a program that reads in an integer and then displays the number that has
// the same digits in the reverse order, as illustrated by this sample run:
// This program reverses the digits in an integer.
//  Enter a positive integer: 123456789
//  The reversed number is 987654321
// To make sure your program can handle integers as large as the one shown in the
// example, use the type long instead of int in your program.

#include <iostream>

using namespace std;

void PrintReverseInteger(long input)
{
	cout << input % 10;
	
	if (input > 10) {
		PrintReverseInteger(input / 10);
	}
}

int main(int argc, char const *argv[])
{
	long input;

	cout << "Enter a positive number: ";

	cin >> input;

	cout << "The reversed number is: ";

	PrintReverseInteger(input);

	return 0;
}