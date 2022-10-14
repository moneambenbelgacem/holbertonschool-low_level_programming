#include "main.h"
#include <stdio.h>
/**
 * _strchr - print an array of integers
 * _putchar - writes the character c to stdout
 * @s: char to plain
 * @c: char to plain
 * Return: nothing.
 */
char *_strstr(char *haystack, char *needle) {
  int i, j;

  for (i = 0; haystack[i] != '\0'; i++) {
    while (haystack[i] == needle[j]) {

      if (haystack[i] == needle[j])
        j++;
      else
        break;
    }
  }
  return (haystack + i);
}