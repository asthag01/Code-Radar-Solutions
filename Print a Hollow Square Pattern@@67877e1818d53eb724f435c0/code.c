#include<stdio.h>
 
int main()
{
    int i, j, Side;
     
    scanf("%d", &Side);
    for(i = 0; i < Side; i++)
    {
    	for(j = 0; j < Side; j++)
    	{
    	   if(i == 0 || i == Side-1 || j == 0 || j == Side-1)
    	   {
    		printf("*");
	   }
	   else
	   {
		printf(" ");
	   }         
        }
        printf("\n");
    }
    return 0;
}