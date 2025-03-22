#include <stdio.h>

void change_max_min(int size, int a[])
{
	int min = a[0], max = a[0], maxPos = 0, minPos = 0;

	for (int i = 1; i < size; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			minPos = i;
		}
		if (max < a[i])
		{
			max = a[i];
			maxPos = i;
		}
	}

	a[maxPos] = min;
	a[minPos] = max;
}

int main(int argc, char *argv[])
{
	int size = 10, ar[size];
	for (int i = 0; i < size; i++)
		scanf("%d", &ar[i]);
	printf("\n");
	change_max_min(size, ar);

	for (int i = 0; i < size; i++)
		printf("%d ", ar[i]);
}