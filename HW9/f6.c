#include <stdio.h>

int is_two_same(int size, int a[])
{
	if (size == 0)
		return 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			if (a[i] == a[j] && i != j)
			{
				return 1;
			}
		}
	}

	return 0;
}

int main(int argc, char *argv[])
{
	int ar[5] = {1, 2, 3, 4, 5};
	if (is_two_same((sizeof(ar) / sizeof(ar[0])), ar) == 1)
		printf("YES");
	else
		printf("NO");

	return 0;
}