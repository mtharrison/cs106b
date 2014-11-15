// The strutils.h library contains a function IntegerToString,. You might have
// wondered how the computer actually goes about the process of converting an integer
// into its string representation. As it turns out, the easiest way to implement this
// function is to use the recursive decomposition of an integer outlined in exercise 6.
// Rewrite the IntegerToString implementation so that it operates recursively without
// using use any of the iterative constructs such as while and for.

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 5

char strings[10] = {
	'0','1','2','3','4','5','6','7','8','9'
};

char* IntegerToString(int i, char *string)
{
	*(string) = strings[i % 10];

	if(i < 10) {
		return string;	
	}

	string--;

	return IntegerToString(i / 10, string);
}

int main(int argc, char const *argv[])
{
	char string[MAX_LENGTH];
	string[MAX_LENGTH - 1] = '\0';

	assert(strcmp(IntegerToString(7, &string[MAX_LENGTH - 2]), "7") == 0);

	char string2[MAX_LENGTH];
	string2[MAX_LENGTH - 1] = '\0';

	assert(strcmp(IntegerToString(7983,&string2[MAX_LENGTH - 1]), "7983") == 0);

	puts("All assertions correct - success!");

	return 0;
}