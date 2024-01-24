#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - outputs a data structure
 *
 * @array:  data structure
 * @size: amount of elems in data structure
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
