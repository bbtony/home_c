#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, prev = 0, next = 0, flag = 0;
	scanf("%d", &n);

	// проверяем число
	if (n / 10 == 0)
	{
		printf("NO");
		return 0;
	}
	// используем вместо первой итерации, чтобы потом сравнивать уже в цикле
	prev = (n % 10);
	n = n / 10;

	while (flag == 0)
	{
		if (n / 10 == 0)
		{
			next = (n % 10);
			flag = 1;
		}
		else
		{
			next = (n % 10);
			n = n / 10;
		}

		// проверяем на равенство рядом стоящих,flag == 2 это положительный результат
		if (prev == next)
			flag = 2;
		else
			prev = next;
	}

	if (flag == 2)
		printf("YES");
	else
		printf("NO");

	return 0;
}