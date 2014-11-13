#include <stdio.h>

long long factorial(long long x)
{
	if(x == 0)
		return 1;
	else
		return x * factorial(x - 1);
}

// long long countLeadingZeros(long long x)
// {
// 	return x;
// }

int main(int argc, char const *argv[])
{
	long long f = factorial(20);

	printf("%lld\n", f);

	return 0;
}