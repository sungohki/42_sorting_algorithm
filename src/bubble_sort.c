#include "sort_utils.h"

void	bubble_sort(int *arr, int num)
{
	int		index;
	int		sub_index;

	index = 0;
	while (index < num - 1)
	{
		sub_index = 0;
		while (sub_index < num - index - 1)
		{
			if (arr[sub_index] > arr[sub_index + 1])
				swap_num(&arr[sub_index], &arr[sub_index + 1]);
			sub_index++;
		}
		index++;
	}
}
