#include <stdio.h>
#include <math.h>

int main(int argvc, char *argv[])
{
	int n;

	scanf("%d", &n);

	switch (n)
	{
	case 1:
		printf("%d", 1);
		break;
	case 2:
		printf("%d", 2);
		break;
	case 3:
		printf("%d", 4);
		break;
	default:
		printf("%.0f", pow((double)2, (double)n - 1));
		break;
	}

	return 0;
}