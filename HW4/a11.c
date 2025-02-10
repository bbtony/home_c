#include <stdio.h>

int main(int argc, char *argv[])
{
	int input[5], min = 0, max = 0;
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &input[i]);
	}

	min = input[0];
	max = input[0];
	for (int i = 1; i < 5; i++)
	{
		if (min > input[i])
		{
			min = input[i];
		}
		if (max < input[i])
		{
			max = input[i];
		}
	}

	printf("%d", min + max);

	return 0;
}