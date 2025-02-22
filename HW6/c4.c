#include <stdio.h>

int funcX(int x)
{
	if (x >= -2 && x < 2)
	{
		return x * x;
	}

	if (x >= 2)
	{
		return x * x + 4 * x + 5;
	}

	// x < -2
	return 4;
}

int main(int argc, char *argv[])
{
	int a, b, c, d, e, res, tmp;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	res = funcX(a);

	tmp = funcX(b);
	if (res < tmp)
		res = tmp;

	tmp = funcX(c);
	if (res < tmp)
		res = tmp;

	tmp = funcX(d);
	if (res < tmp)
		res = tmp;

	tmp = funcX(e);
	if (res < tmp)
		res = tmp;

	printf("%d", res);
	return 0;
}