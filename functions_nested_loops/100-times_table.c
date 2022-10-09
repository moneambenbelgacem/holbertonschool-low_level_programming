#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Entry point
 *
 * Description: 'prints every minute of the day of Jack Bauer.'
 *@n: input value of matrice
 * Return: void
 */
void print_times_table(int n) {

  int i, j;

  for (i = 0; i <= n; i++) {
    for (j = 0; j <= n; j++) {
      if ((i * j) < 10 && j != 0) {

        putchar(',');
        putchar(' ');
        putchar(' ');
        putchar(' ');
      } else if ((i * j) > 9 && (i * j) < 100) {

        putchar(',');
        putchar(' ');
        putchar(' ');
      } else if (j != 0) {
		
		
        putchar(',');
        putchar(' ');
      }
		else if((i * j) >= 100)
		{
			  putchar(',');
        putchar(' ');
		}
      printf("%d", i * j);
    }
    putchar('\n');
  }
}
