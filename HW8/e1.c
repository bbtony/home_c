#include <stdio.h>

float avg_of_arr(const int *arr, int size)
{
	float avg = 0;
	for (int i = 0; i < size; i++)
		avg += arr[i];

	return avg / (float)size;
}

int main(int argc, char *argv[])
{
	int sizeOfArr = 5;
	int arr[sizeOfArr];

	for (int i = 0; i < sizeOfArr; i++)
		scanf("%d ", &arr[i]);
	printf("\n");

	printf("%.3f\n", avg_of_arr(arr, sizeOfArr));

	return 0;
}