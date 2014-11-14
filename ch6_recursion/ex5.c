// For each of the two recursive implementations of the function Fib(n) presented in
// this chapter, write a recursive function (you can call these CountFib1 and
// CountFib2 for the two algorithms) that counts the number of function calls made
// during the evaluation of the corresponding Fibonacci calculation. Write a main
// program that uses these functions to display a table showing the number of calls
// made 

#include <assert.h>
#include <stdio.h>

int Fib1(int n, int* counter) {

    (*counter)++;

    if (n < 2) {
        return n;
    } else {
        return Fib1(n - 1, counter) + Fib1(n - 2, counter);
    }
}

int CountFib1(int n) {
    int calls = 0;

    Fib1(n, &calls);

    return calls;
}

// ============================

int AdditiveSequence(int n, int t0, int t1, int* counter) {
    (*counter)++;
    if (n == 0) return t0;
    if (n == 1) return t1;
    return AdditiveSequence(n - 1, t1, t0 + t1, counter);
}

int Fib2(int n, int* counter) {
    (*counter)++;
    return AdditiveSequence(n, 0, 1, counter);
}

int CountFib2(int n) {
    int calls = 0;

    Fib2(n, &calls);

    return calls;
}

int main(int argc, char const *argv[])
{

    printf("%s\n", "Number of calls:");
    
    printf("%4s%10s%10s\n", "N", "Fib1", "Fib2");
    printf("%4s%10s%10s\n", "--", "-----", "-----");

    for (int i = 0; i <= 12; i++)
    {
        printf("%4d%10d%10d\n", i, CountFib1(i), CountFib2(i));
    }

    return 0;
}