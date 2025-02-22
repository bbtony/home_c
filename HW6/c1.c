#include <stdio.h>

int abs(int m)
{
	return (m < 0) ? m * -1 : m;
}

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);

	printf("%d", abs(n));
	return 0;
}