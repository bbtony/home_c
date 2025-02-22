#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, res = 0;

	scanf("%d", &n);
	if (n == 1)
	{
		printf("%d", n);
		return 0;
	}

	res = 1;
	for (int i = 1; i <= n; i++)
	{
		res *= i;
	}

	printf("%d", res);
	return 0;
}