#include "sort.h"

/**
 * swap_ints - nums are interchanged in data structure
 * @a: initial num to be interchanged
 * @b: second/following value
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * lomuto_partition - intergers are divided using a specified sequence
 * @array: nums categorized together
 * @size: memory occupied by the arr
 * @left: initial i(s) to locate position
 * @right: the tip i(s) for the position
 *
 * Return: output the i(s) (specified section)
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * lomuto_sort - recursive sorting using pivot point
 * @array: nums categorized together
 * @size: memory occupied by the arr
 * @left: initial i(s) to locate position
 * @right: the tip i(s) for the position
 *
 * Return: output the i(s) (specified section)
 */

void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 *quick_sort - quicksort sorting algorithm
 * @array: data structure
 * @size: memory of data structure
 *
 * Description: partition scheme is used to divide data
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
