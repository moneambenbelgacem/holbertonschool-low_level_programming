#include "search_algos.h"
/**
 * print_array- print element of array from start to final
 * @array: list of integer
 * @star: from start
 * @stop: from stop
 */
void print_array(int *array, int star, int stop)
{
	int i;

	printf("Searching in array: ");
	for (i = star; i <= stop; i++)
	{
		if (i != star)
			printf(", ");
		printf("%d", array[i]);
	}
	putchar('\n');
}
/**
 * binary_search - function that print negative or positif check
 *@array: length of array
 *@size: input char
 *@value: input char
 *Return: Always 0 (Success)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
