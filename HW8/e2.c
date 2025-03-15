#include <stdio.h>

int min_of_arr(const int *arr, int size)
{
	int min = arr[0];
	for (int i = 1; i < size; i++)
		if (arr[i] < min)
			min = arr[i];

	return min;
}

int main(int argc, char *argv[])
{
	int sizeOfArr = 5;
	int arr[sizeOfArr];

	for (int i = 0; i < sizeOfArr; i++)
		scanf("%d ", &arr[i]);
	printf("\n");

	printf("%d\n", min_of_arr(arr, sizeOfArr));

	return 0;
}