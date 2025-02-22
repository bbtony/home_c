#include <stdio.h>

int even_numbers()
{
	int res = 0;
	char ch;

	do
	{
		ch = getchar();
		if (ch >= '0' && ch <= '9')
		{
			res += (ch - '0');
		}
	} while (ch != '\n');

	return (res % 2 == 0) ? 1 : 0;
}

int main(int argc, char *argv[])
{
	int n;

	if (even_numbers() == 1)
		printf("YES");
	else
		printf("NO");
	return 0;
}