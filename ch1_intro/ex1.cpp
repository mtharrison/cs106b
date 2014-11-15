// Write a program that reads in a temperature in degrees Celsius and displays the
// corresponding temperature in degrees Fahrenheit. The conversion formula is
// F = (9/5) C + 32

#include <iostream>

using namespace std;

float CelsiusToFarenheit(float celcius)
{
	return (celcius * (9.0/5)) + 32;
}

int main(int argc, char const *argv[])
{
	string input;

	cout << "Enter a value in celcius:";

	cin >> input;

	float value = stof(input);

	cout << CelsiusToFarenheit(value);

	return 0;
}