#include <stdio.h>

int sum_number(int n)
{
	int res = 0;
	res += n % 10;
	if (n / 10 != 0)
	{
		n = n / 10;
		res += sum_number(n);
		return res;
	}

	return res;
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%d", sum_number(n));
	return 0;
}