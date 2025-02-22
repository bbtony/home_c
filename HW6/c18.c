#include <stdio.h>

int get_count_numbers()
{
	int res = 0;
	char ch;

	do
	{
		ch = getchar();
		if (ch >= '0' && ch <= '9')
		{
			res++;
		}
	} while (ch != '.');

	return res;
}

int main(int argc, char *argv[])
{

	printf("%d", get_count_numbers());
	return 0;
}