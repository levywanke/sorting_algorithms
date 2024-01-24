#include "sort.h"

/**
 * swap_ints - interchanges datasets in provided structure
 * @a: Tinitial num
 * @b: Tlast num to be interchanged
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * hoare_partition - specific point is used to define the algorithm
 * @array: data structure
 * @size: memory (of data )occupied
 * @left: simply position (start)
 * @right: simply position(end)
 *
 * Return: end specific point in prvided data sets
 *
 * Description: use of last specific point to retrieve the right value needed
 */
int hoare_partition(int *array, size_t size, int left, int right)
{
	int pivot, above, below;

	pivot = array[right];
	for (above = left - 1, below = right + 1; above < below;)
	{
		do {
			above++;
		} while (array[above] < pivot);
		do {
			below--;
		} while (array[below] > pivot);

		if (above < below)
		{
			swap_ints(array + above, array + below);
			print_array(array, size);
		}
	}

	return (above);
}

/**
 * hoare_sort - the algo is specified to return required value
 * @array:data structure
 * @size:memory of data structure
 * @left: beginning position of data structure
 * @right: ending position of data structure
 *
 * Description: specific steps are used to ---
 */
void hoare_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = hoare_partition(array, size, left, right);
		hoare_sort(array, size, left, part - 1);
		hoare_sort(array, size, part, right);
	}
}

/**
 * quick_sort_hoare - Sort an array of integers in ascending
 *                    order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: specific steps are used to --- output(interchanged)
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	hoare_sort(array, size, 0, size - 1);
}
