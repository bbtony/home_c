#include <stdio.h>

int summ(int n)
{
	int res = 0;

	if (n == 1)
	{
		return n;
	}

	for (int i = 1; i <= n; i++)
	{
		res += i;
	}

	return res;
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);

	printf("%d", summ(n));
	return 0;
}