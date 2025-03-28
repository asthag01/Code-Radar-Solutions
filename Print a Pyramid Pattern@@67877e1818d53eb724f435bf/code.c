#include <stdio.h>
 
int main() 
{
  int Rows, i, j, k = 0;
	
  scanf("%d", &Rows);
	
  for ( i = 1 ; i <= Rows; i++ ) 
    {
      for ( j = 1 ; j <= Rows-i; j++ ) 
      {
      	printf(" ");    	
      }
      while (k != (2 * i - 1))
      {
  	printf("*"); 
  	k++;
      }
      k = 0;
      printf("\n");
    }
  return 0;
}