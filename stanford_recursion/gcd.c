// The greatest common divisor (g.c.d.) of two nonnegative integers is the largest
// integer that divides evenly into both. In the third century B.C., the Greek
// mathematician Euclid discovered that the greatest common divisor of x and y can
// always be computed as follows:
// • If x is evenly divisible by y, then y is the greatest common divisor.
// • Otherwise, the greatest common divisor of x and y is always equal to the greatest
// common divisor of y and the remainder of x divided by y.
// Use Euclid’s insight to write a recursive function GCD(x, y) that computes the
// greatest common divisor of x and y.

#include <assert.h>
#include <stdio.h>

int GCD(int x, int y)
{
	if(x % y == 0)
		return y;

	return GCD(y, x % y);
}

int main(int argc, char const *argv[])
{
    assert(GCD(6, 9) == 3);
    assert(GCD(78, 24) == 6);
    assert(GCD(788, 612) == 4);
    assert(GCD(612, 788) == 4);

    puts("All assertions correct - success!");

    return 0;
}