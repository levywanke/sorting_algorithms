#include "sort.h"

/**
 * swap_ints - arrs are made from numericals.
 * @a: initial num arrayed.
 * @b: last num to be arrayed.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - algorithm that araarnges from
 * small to largest value iteratively.
 * @array: nums to be sorted.
 * @size: memory occupied by the array.
 *
 * Description: output after sorting.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
