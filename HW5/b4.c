#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	scanf("%d", &n);
	if (n / 100 <= 9 && n / 100 > 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}