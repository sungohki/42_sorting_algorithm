#include "sort_utils.h"

int	main(void)
{
	system("clear");
	int		ans;
	int		arr[] = {10, 2, 1, 5, 6, 7, 8, 3, 9, 4, 19, 16, 21, 22, 62};

	printf("## Choose Tester ##\n\n");
	scanf("%d", &ans);
	system("clear");
	switch (ans)
	{
	case 1:
		printf("## bubble sort tester\n\n");
		print_sort_arr(arr, sizeof(arr) / sizeof(int), &bubble_sort);
		break;
	case 2:
		printf("## selection sort tester\n\n");
		print_sort_arr(arr, sizeof(arr) / sizeof(int), &selection_sort);
		break;
	case 3:
		printf("## insertion sort tester\n\n");
		print_sort_arr(arr, sizeof(arr) / sizeof(int), &insertion_sort);
		break;
	case 4:
		printf("## merge sort tester\n\n");
		print_sort_arr(arr, sizeof(arr) / sizeof(int), &merge_sort);
		break;
	case 5:
		printf("## bubble sort tester\n\n");
		// print_sort_arr(arr, sizeof(arr) / sizeof(int), &selection_sort);
		break;
	case 6:
		printf("## bubble sort tester\n\n");
		// print_sort_arr(arr, sizeof(arr) / sizeof(int), &selection_sort);
		break;
	default:
		printf("## Wrong Selection\n\n");
		break;
	}
	return (0);
}
