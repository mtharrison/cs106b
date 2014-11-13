#include <stdio.h>

// Pascals triangle
//
//    1
//   1 1
//  1 2 1
// 1 3 3 1

int 
pascalsValue(int row, int position)
{
  if(
    position == 1 || 
    position == row || 
    row == 1 || 
    row == 2)
  {
    return 1;
  }
  else 
  {
    return pascalsValue(row - 1, position - 1) + 
           pascalsValue(row - 1, position);
  }
}

int 
main(int argc, char const *argv[])
{
    printf("%d\n", pascalsValue(4,2));
    printf("%d\n", pascalsValue(12,5));
    return 0;
}
