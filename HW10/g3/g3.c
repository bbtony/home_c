#include <stdio.h>
#include <string.h>

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

	char str[1001];

	fgets(str, 1001, in);
	fclose(in);

	str[strcspn(str, "\n")] = 0;

	int length = strlen(str);

	int flag = 1;
	// отсутствие пробела для первого сравнения, потом всегда 0 и соответственно всегда ставим пробел перед индексом

	for (size_t i = 0; i < (length - 1); i++)
	{
		if (str[i] == str[length - 1])
		{
			if (!flag)
			{
				fprintf(out, " ");
			}
			fprintf(out, "%ld", i);
			flag = 0;
		}
	}

	fclose(out);

	return 0;
}