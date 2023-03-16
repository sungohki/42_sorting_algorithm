#ifndef SORT_UTILS_H
# define SORT_UTILS_H

# include <stdio.h>
# include <stdlib.h>

void	swap_num(int *a, int *b);
void	print_sort_arr(int *arr, int arr_size, void (*sort)(int *, int));

void	bubble_sort(int *arr, int num);
void	selection_sort(int *arr, int num);

#endif