#include <stdio.h>

int main(int argc, char *argv[])
{
	int input, result = 0;
	scanf("%d", &input);
	result = (input / 100) * ((input - (input / 100 * 100)) / 10) * ((input - (input / 100 * 100)) % 10);
	printf("%d", result);
	return 0;
}