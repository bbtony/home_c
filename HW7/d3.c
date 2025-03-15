#include <stdio.h>

void sep_numbers(int num)
{
	int res = num % 10;
	if (res != 0)
	{
		printf("%d ", res);
		if (num / 10 != 0)
		{
			return sep_numbers(num / 10);
		}
	}
	if (res == 0 && num / 10 > 0)
	{
		printf("%d ", res);
		return sep_numbers(num / 10);
	}

	if (num == 0)
	{
		printf("%d ", num);
		return;
	}
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	sep_numbers(n);
	return 0;
}