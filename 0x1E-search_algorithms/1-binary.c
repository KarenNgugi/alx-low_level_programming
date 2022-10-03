#include "search_algos.h"

/**
 * print_array - print array elements
 * 
 * @array: array to print
 *
 * Return: nothing
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i != size - 1)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}


/**
 * binary_search - searches value in sorted array of integers using binary
 * search algorithm
 *
 * @array: array to search
 * @size: length of array
 * @value: value to search
 *
 * Return: index of `value`, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low = array[0];
	int high = array[size - 1];
	int mid;
	
	while (low <= high)
	{
		print_array(array, size);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			low = mid + 1;

		else
			high = mid - 1;
	}

	return (-1);
}
