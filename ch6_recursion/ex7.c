// Write a function DigitalRoot(n) that returns the digital root of its argument.
// Although it is easy to implement DigitalRoot using the DigitSum function from
// exercise 6 and a while loop, part of the challenge of this problem is to write the
// function recursively without using any explicit loop constructs.

#include <assert.h>
#include <stdio.h>

int DigitSum(int x)
{
    if(x < 10)
    {
        return x;
    }
    else
    {
        return DigitSum(x / 10) + x % 10;
    }
}

int DigitalRoot(int n)
{
	if(n < 10)
	{
		return n;
	}

	return DigitalRoot(DigitSum(n));
}

int main(int argc, char const *argv[])
{
	assert(DigitalRoot(1729) == 1);
	assert(DigitalRoot(876876) == 6);
	assert(DigitalRoot(765876346) == 7);
}