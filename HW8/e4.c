#include <stdio.h>
#include <limits.h>

int max_of_arr(const int *arr, int size)
{
	int max = INT_MIN;
	int maxPrev = INT_MIN;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= max)
		{
			maxPrev = max;
			max = arr[i];
		}
		if (arr[i] < max && arr[i] > maxPrev)
		{
			maxPrev = arr[i];
		}
	}

	return max + maxPrev;
}

int main(int argc, char *argv[])
{
	int sizeOfArr = 10;
	int arr[sizeOfArr];

	for (int i = 0; i < sizeOfArr; i++)
		scanf("%d ", &arr[i]);
	printf("\n");

	printf("%d\n", max_of_arr(arr, sizeOfArr));

	return 0;
}