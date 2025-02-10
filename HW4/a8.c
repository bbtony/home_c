#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b && a >= c)
	{
		printf("%d", a);
	}
	else if (a <= b && b >= c)
	{
		printf("%d", b);
	}
	else if (c >= a && b <= c)
	{
		printf("%d", c);
	}

	return 0;
}