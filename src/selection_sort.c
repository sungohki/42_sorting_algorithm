#include "sort_utils.h"

void	selection_sort(int *arr, int num)
{
	int		index;			// 배열의 모든 요소를 참조할 인덱스
	int		sub_index;		// 참조 중인 요소와 비교할 요소들을 참조할 인덱스
	int		min_index;		// 현재 탐색 중에 가장 작은 요소를 가리키는 인덱스

	index = 0;
	// num - 1 에 온 시점엔 정렬이 끝났으므로 index는 num - 2일 때 까지만 탐색
	while (index < num - 1)
	{
		sub_index = index + 1;		// index 까지는 정렬이 된 상태이므로, 그 다음 인덱스부터 시작
		min_index = index; 
		while (sub_index < num)
		{
			if (arr[min_index] > arr[sub_index])
				// 만약 특정 인덱스가 가리키는 요소의 값이 min_index가 가리키는 요소보다 작을 경우
				min_index = sub_index;
			sub_index++;
		}
		if (min_index != index)
			// 만약 탐색을 마쳤는데 min_index가 그대로인 경우, 아무런 행동도 하지 않는다.
			swap_num(&arr[index], &arr[min_index]);
		index++;
	}
}
