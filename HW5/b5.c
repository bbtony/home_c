#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, res = 0, flag = 0;
	scanf("%d", &n);

	while (flag != 1)
	{
		if (n / 10 == 0)
		{
			res += (n % 10);
			flag = 1;
		}
		else
		{
			res += (n % 10);
			n = n / 10;
		}
	}

	printf("%d", res);

	return 0;
}