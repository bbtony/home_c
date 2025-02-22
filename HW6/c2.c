#include <stdio.h>

int poww(int m, int n)
{
	int res = m;

	if (n == 0)
	{
		return 1;
	}

	if (n == 1)
	{
		return m;
	}

	for (int i = 2; i <= n; i++)
	{
		res *= m;
	}

	return res;
}

int main(int argc, char *argv[])
{
	int m, n;
	scanf("%d %d", &m, &n);

	printf("%d", poww(m, n));
	return 0;
}