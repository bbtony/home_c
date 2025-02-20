#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, m;
	double p;
	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++)
	{
		p = pow((double)i, 2.00);
		printf("%.0f ", p);
	}

	return 0;
}