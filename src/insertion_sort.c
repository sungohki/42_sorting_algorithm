#include "sort_utils.h"

void	insertion_sort(int *arr, int num)
{
	int		index;
	int		sub_index;
	int		key;

	index = 1;
	while (index < num)
	{
		key = arr[index];		// 정렬하고자 하는 인덱스의 값을 key에 저장
		sub_index = index - 1;	// index 보다 하나 앞으로 sub_index를 지정
		while (sub_index >= 0 && arr[sub_index] > key)
		{
			// sub_index가 0 이상이고, 가리키는 요소가 key 값보다 클 때까지만 반복한다.
			arr[sub_index + 1] = arr[sub_index];		// sub_index + 1 이 가리키는 요소롤 sub_index 가 가리키는 요소로 초기화
			sub_index--;
		}
		arr[sub_index + 1] = key;
		index++;
	}
}
