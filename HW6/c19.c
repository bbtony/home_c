#include <stdio.h>

int get_sum_numbers()
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
	} while (ch != '.');

	return res;
}

int main(int argc, char *argv[])
{

	printf("%d", get_sum_numbers());
	return 0;
}