#include <stdio.h>

// Pascals triangle
//
//    1
//   1 1
//  1 2 1
// 1 3 3 1

typedef struct {
  int row;
  int col;
} pascalPosition;

int pascalsValue(pascalPosition pos)
{
  if(pos.col == 1 || 
     pos.col == pos.row)
  {
    return 1;
  }
  else 
  {
    return pascalsValue((pascalPosition) {pos.row - 1, pos.col - 1}) + 
           pascalsValue((pascalPosition) {pos.row - 1, pos.col});
  }
}

int main(int argc, char const *argv[])
{
    printf("%d\n", pascalsValue((pascalPosition) {4,2}));
    printf("%d\n", pascalsValue((pascalPosition) {12,5}));
    printf("%d\n", pascalsValue((pascalPosition) {30,12}));
    return 0;
}
