#include <stdio.h>

int main(int argc, char *argv[])
{
	int input[5], max = 0;
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &input[i]);
	}

	max = input[0];
	for (int i = 1; i < 5; i++)
	{
		if (max < input[i])
		{
			max = input[i];
		}
	}

	printf("%d", max);

	return 0;
}