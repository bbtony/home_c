#include <stdio.h>

void min_max_of_arr(const int *arr, int size, int *minPos, int *min, int *maxPos, int *max)
{
	*min = arr[0];
	*minPos = 0;
	*max = arr[0];
	*maxPos = 0;

	for (int i = 1; i < size; i++)
	{
		if (arr[i] < *min)
		{
			*minPos = i;
			*min = arr[i];
		}
		if (arr[i] > *max)
		{
			*maxPos = i;
			*max = arr[i];
		}
	}

	return;
}

int main(int argc, char *argv[])
{
	int minPos, min, maxPos, max;
	int sizeOfArr = 10;
	int arr[sizeOfArr];

	for (int i = 0; i < sizeOfArr; i++)
		scanf("%d ", &arr[i]);
	printf("\n");
	min_max_of_arr(arr, sizeOfArr, &minPos, &min, &maxPos, &max);
	printf("%d %d %d %d\n", maxPos + 1, max, minPos + 1, min);

	return 0;
}