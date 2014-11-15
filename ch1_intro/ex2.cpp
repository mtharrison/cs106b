// Write a program that converts a distance in meters to the corresponding English
// distance in feet and inches. The conversion factors you need are
// 1 inch = 0.0254 meters
// 1 foot = 12 inches

#include <iostream>

using namespace std;

struct FeetAndInches {
	int feet;
	int inches;
};

FeetAndInches MetersToFeetAndInches(int metres) {

	int inches = metres / 0.0254;

	return (FeetAndInches) {inches / 12, inches % 12};
}

int main(int argc, char const *argv[])
{
	string input;

	cout << "Enter a value in metres to convert to feet and inches:";

	cin >> input;

	int metres = stof(input);

	FeetAndInches fi = MetersToFeetAndInches(metres);

	printf("%dm is equal to %d' and %d\" \n", metres, fi.feet, fi.inches );

	return 0;
}