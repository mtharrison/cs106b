// Write an iterative implementation of the function Fib(n).

// Recursive version: 
//
// int Fib(int n) {
//     if (n < 2) {
//         return n;
//     } else {
//         return Fib(n - 1) + Fib(n - 2);
//     }
// }

#include <assert.h>
#include <stdio.h>

int Fib(int n)
{
    int lastEls[2] = {0, 1};

    if(n < 2)
        return lastEls[n];

    int curr = 2;
    int next;

    while(curr <= n)
    {
        next = lastEls[0] + lastEls[1];
        lastEls[0] = lastEls[1];
        lastEls[1] = next;
        curr++;
    }

    return next;
}

int main(int argc, char const *argv[])
{
    assert(Fib(8) == 21);
    assert(Fib(12) == 144);

    puts("All assertions correct - success!");

    return 0;
}