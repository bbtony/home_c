#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (b > a && b < c)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}