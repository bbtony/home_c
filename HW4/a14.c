#include <stdio.h>

int main(int argc, char *argv[])
{
	int input, max = 0, tmp = 0;
	scanf("%d", &input);
	max = input / 100;

	tmp = (input - (input / 100 * 100)) / 10;
	if (tmp > max)
	{
		max = tmp;
	}

	tmp = (input - (input / 100 * 100)) % 10;
	if (tmp > max)
	{
		max = tmp;
	}

	printf("%d", max);
	return 0;
}