#include <stdio.h>

int main(int argc, char *argv[])
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);

	printf("%.2f", (a + b + c) / 3);
	return 0;
}