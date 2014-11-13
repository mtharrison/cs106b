// http://cs.stanford.edu/people/eroberts/courses/cs106b/chapters/05-intro-to-recursion.pdf

// Unlike many programming languages, C++ does not include a predefined operator
// that raises a number to a power. As a partial remedy for this deficiency, write a
// recursive implementation of a function
//  int RaiseIntToPower(int n, int k)
// that calculates n to the k.

#include <assert.h>
#include <stdio.h>

int power(int n, int k)
{
    if(k == 0)
        return 1;

    return n * (power(n, k - 1));
}

int main(int argc, char const *argv[])
{
    assert(power(2, 3) == 8);
    assert(power(9, 3) == 729);
    assert(power(2, 8) == 256);
    assert(power(5, 7) == 78125);

    puts("All assertions correct - success!");

    return 0;
}