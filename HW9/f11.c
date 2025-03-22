#include <stdio.h>

void get_min_sum_ar(int ar[], int size, int *firstPos, int *secondPos)
{
	int minSum = ar[0] + ar[1];
	*firstPos = 0;
	*secondPos = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if ((ar[i] + ar[j]) < minSum && i != j)
			{
				minSum = ar[i] + ar[j];
				*firstPos = i;
				*secondPos = j;
			}
		}
	}
}

int main(int argc, char *argv[])
{
	// int arr[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
	// 0 1
	// int arr[30] = {-1000, 25, -20, 25, -11, -32, -5, 3, 3, -34, -12, 36, 37, 2, 8, 49, 30, 30, -12, 14, -40, -24, 40, -27, 3, 49, 13, 44, -33, -1000};
	// 0 29
	int sizeOfArr = 30;
	int arr[sizeOfArr];

	for (int i = 0; i < sizeOfArr; i++)
		scanf("%d ", &arr[i]);
	printf("\n");

	int fPos, sPos;
	get_min_sum_ar(arr, (sizeof(arr) / sizeof(arr[0])), &fPos, &sPos);
	printf("%d %d\n", fPos, sPos);
	return 0;
}