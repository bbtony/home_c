#include <stdio.h>

void print_num(int num)
{
	if (num == 0)
	{
		return;
	}
	print_num(num / 10);
	printf("%d ", num % 10);
}

int main(int argc, char *argv[])
{
	int n = 0;
	scanf("%d", &n);
	if (n == 0)
	{
		printf("0");
		return 0;
	}

	print_num(n);
	printf("\n");

	return 0;
}