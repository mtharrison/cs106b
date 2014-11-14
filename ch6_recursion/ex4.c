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
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    // Make an array big enough to hold entire series with 
    // first 2 elements set

    int curr = 2;

    int series[n + 1];
    series[0] = 0;
    series[1] = 1;

    // Build up the series

    while(curr <= n)
    {
        series[curr] = series[curr - 1] + series[curr - 2];
        curr++;
    }

    return series[n];
}

int main(int argc, char const *argv[])
{
    assert(Fib(8) == 21);
    assert(Fib(12) == 144);

    puts("All assertions correct - success!");

    return 0;
}