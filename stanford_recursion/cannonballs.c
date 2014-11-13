// http://cs.stanford.edu/people/eroberts/courses/cs106b/chapters/05-intro-to-recursion.pdf

// Spherical objects, such as cannonballs, can be stacked to form a pyramid with one
// cannonball at the top, sitting on top of a square composed of four cannonballs, sitting
// on top of a square composed of nine cannonballs, and so forth. Write a recursive
// function Cannonball that takes as its argument the height of the pyramid and returns
// the number of cannonballs it contains. Your function must operate recursively and
// must not use any iterative constructs, such as while or for.

//    o
//   o o
//   o o
//  o o o
//  o o o
//  o o o
// o o o o
// o o o o
// o o o o
// o o o o

#include <assert.h>
#include <stdio.h>

int Cannonball(int height)
{
    if(height == 1) 
        return 1;
    
    return (height * height) + Cannonball(height - 1);
}

int main(int argc, char const *argv[])
{
    assert(Cannonball(4) == 30);
    assert(Cannonball(5) == 55);
    assert(Cannonball(6) == 91);
    assert(Cannonball(7) == 140);

    puts("All assertions correct - success!");

    return 0;
}