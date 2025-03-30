#include <stdio.h>
#include <string.h>

void count_up_low_sym(char str[], int size, int *up, int *low)
{
	for (int i = 0; i < size; i++)
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			(*up)++;
		}
		if (str[i] <= 122 && str[i] >= 97)
		{
			(*low)++;
		}
	}
}

int main(int argc, char *argv[])
{
	FILE *in = fopen("input.txt", "r");
	if (in == NULL)
	{
		printf("Error: input file is not open\n");
		return 1;
	}

	FILE *out = fopen("output.txt", "w");
	if (out == NULL)
	{
		printf("Error: output file is not open\n");
		return 1;
	}

	char str[10001];

	fgets(str, 10001, in);
	fclose(in);

	str[strcspn(str, "\n")] = 0;
	int length = strlen(str);

	int up = 0, low = 0;
	count_up_low_sym(str, length, &up, &low);

	fprintf(out, "%d %d", low, up);
	fclose(out);

	return 0;
}