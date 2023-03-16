#include "sort_utils.h"

void	swap_num(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_sort_arr(int *arr, int arr_size, void (*sort)(int *, int))
{
	printf ("# Before ->\t");
	for (int i = 0; i < arr_size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	(*sort)(arr, arr_size);
	printf ("# After  ->\t");
	for (int i = 0; i < arr_size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
