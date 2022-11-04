#include "variadic_functions.h"
/**
 * print_int - prints an int
 * @args: the list of args
 */
void print_int(va_list args) { printf("%d", va_arg(args, int)); }
/**
 * print_char - prints an int
 * @args: the list of args
 */
void print_char(va_list args) { printf("%c", va_arg(args, int)); }
/**
 * print_string - prints an int
 * @args: the list of args
 */
void print_string(va_list args) {
  char *z = va_arg(args, char *);

  !z?printf("(nil)"):printf("%s",z);
}
/**
 * print_float - prints an int
 * @args: the list of args
 */
void print_float(va_list args) { printf("%f", va_arg(args, double)); }

/**
 * print_strings - Entry point
 *
 * @separator: string
 * @n: nuber of elem
 *
 * Description: 'print name.'
 *
 * Return: number
 */
void print_all(const char *const format, ...) {
  int count1 = 0, count2;
  char *sep1 = "", *sep2 = ", ";
  va_list args;
  my_type tab[] = {{'c', print_char},
                   {'i', print_int},
                   {'f', print_float},
                   {'s', print_string}};
  va_start(args, format);
  while (format != NULL && format[count1] != '\0') {
    count2 = 0;
    while (tab[count2].z != '\0') {
      if (tab[count2].z == format[count1]) {
        printf("%s", sep1);
        tab[count2].f(args);
        sep1 = sep2;
      }
      count2++;
    }

    count1++;
  }
  printf("\n");
  va_end(args);
}