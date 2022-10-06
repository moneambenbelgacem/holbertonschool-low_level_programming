#include "main.h"
#include <stdio.h>
/**
 * times_table - Entry point
 *
 * Description: 'prints every minute of the day of Jack Bauer.'
 *
 * Return: void
 */
void times_table(void)
{
 
 int i,j; 
 for (i = 0; i<= 9;i++)
 {
    for (j=0; j<= 9; j++)
    {
       

        printf("%d",i*j);
        if(j==9)
        continue;
        if (i*j < 10)
        {
            printf(",  ");
        }
        else
        {
            printf(", ");
        }
       
    }
     putchar('\n');
   
 }

}