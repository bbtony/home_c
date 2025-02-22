#include <stdio.h>

int middle(int a, int b)
{

	return (a + b) / 2;
}

int main(int argc, char *argv[])
{
	int m, n;
	scanf("%d %d", &m, &n);

	printf("%d", middle(m, n));
	return 0;
}