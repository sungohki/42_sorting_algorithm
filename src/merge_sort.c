#include "sort_utils.h"

static void	merge(int *arr, int left, int mid, int right)
{
	int		left_arr[mid - left + 1];
	int		right_arr[right - mid];
	int		left_idx;
	int		right_idx;

	left_idx = 0;
	while (left + left_idx <= mid)
		left_arr[left_idx] = arr[left + left_idx];
	right_idx = 0;
	while (mid + 1 + right_idx <= right)
		right_arr[right_idx] = arr[mid + 1 + right_idx];
}

void	merge_sort(int *arr, int left, int right)
{
	int		mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}
