#include <stdio.h>

int sum_numbers(int num)
{
	int res = num;

	if (num != 1)
	{
		num -= 1;
		res += sum_numbers(num);
		return res;
	}

	return res;
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	printf("%d", sum_numbers(n));
	return 0;
}