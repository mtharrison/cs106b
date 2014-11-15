// Write a recursive function DigitSum(n) that takes a nonnegative integer and returns
// the sum of its digits. For example, calling DigitSum(1729) should return
// 1 + 7 + 2 + 9, which is 19.

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

int main(int argc, char const *argv[])
{
    assert(DigitSum(1729)  == 19);
    assert(DigitSum(19834) == 25);

    puts("All assertions correct - success!");

    return 0;
}