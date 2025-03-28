#include<stdio.h>
int main()
{
 	int i, j, rows; 
 	scanf("%d", &rows);
	for(i = rows; i > 0; i--)
	{
        if(i == 1 || i == rows)
        {
            for(j = 1; j <= i; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(j = 1; j <= i; j++)
            {
                if(j == 1 || j == i)
                {
                    printf("*");
                }
               
            }
        }   
		printf("\n");
	}
 	return 0;
}