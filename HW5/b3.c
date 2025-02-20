#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, m;
	double p, res = 0;
	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++)
	{
		p = pow((double)i, 2.00);
		res += p;
	}

	printf("%.0f ", res);
	return 0;
}