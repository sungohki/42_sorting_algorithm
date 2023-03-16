#ifndef SORT_UTILS_H
# define SORT_UTILS_H

# include <stdio.h>
# include <stdlib.h>

void	swap_num(int *a, int *b);
void	print_sort_arr(int *arr, int arr_size, void (*sort)(int *, int));

// easy, fast to coding
// but inefficiency to large data sorting
void	bubble_sort(int *arr, int num);
void	selection_sort(int *arr, int num);
void	insertion_sort(int *arr, int num);

// Devide and Conquer Algorithm
void	merge_sort(int *arr, int left, int right);
void	quick_sort(void);
void	heap_sort(void);
void	greedy_sort(void);

#endif