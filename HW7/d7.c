#include <stdio.h>

void print_number(int n)
{
	if (n < 1)
	{
		return;
	}
	if (n != 1)
	{
		printf("%d ", n);
		n -= 1;
		print_number(n);
	}
	else
	{
		printf("%d ", n);
	}

	return;
}

int main(int argc, char *argv[])
{
	int n = 0;
	scanf("%d", &n);
	print_number(n);
	return 0;
}