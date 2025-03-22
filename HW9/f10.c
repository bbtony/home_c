#include <stdio.h>
#include <string.h>

void conc_str(char *s, int *inc, int counter)
{
	if (counter < 10)
	{
		s[(*inc)++] = (char)(counter + '0');
	}
	if (counter >= 10 && counter < 100)
	{
		sprintf(s + *inc, "%d", counter);
		*inc += 2; // Добавляем 2 символа
	}
	if (counter >= 100 && counter < 1000)
	{
		sprintf(s + *inc, "%d", counter);
		*inc += 3; // Добавляем 3 символа
	}
}

int main(int argc, char *argv[])
{
	char s[1000], c, prev = '\0';
	int i = 0, counter = 0;
	while ((c = getchar()) != '.')
	{

		// первая итерация
		if (i == 0)
		{
			prev = c;
			s[i++] = c;
			counter += 1;
			continue;
		}

		// если не совпадают
		if (c != prev)
		{
			conc_str(s, &i, counter);
			counter = 1;
			s[i++] = c;
			prev = c;
			continue;
		}
		else
		{
			counter += 1;
		}
	}

	conc_str(s, &i, counter);
	s[i++] = '\0';

	i = 0;
	while (s[i])
		putchar(s[i++]);

	printf("\n");
	return 0;
}
// Input: aaaaaaaaaabbc.
// Output:a10b2c1