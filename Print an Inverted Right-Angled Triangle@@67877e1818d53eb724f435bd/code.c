#include <stdio.h>
 
int main() 
{
  int Rows, i, j;
  scanf("%d", &Rows);
  for ( i = Rows ; i > 0 ; i-- ) 
  {
      for ( j = i ; j > 0 ; j-- ) 
      {
          printf("* ");
      }
      printf("\n");
  }
  return 0;
}