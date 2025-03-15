#include <stdio.h>
#include <limits.h>

int max_of_arr(const int *arr, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			sum += arr[i];
		}
	}

	return sum;
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