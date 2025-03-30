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

	char str[101];

	fgets(str, 101, in);

	fclose(in);

	str[strcspn(str, "\n")] = 0;

	int length = strlen(str);

	fprintf(out, "%s, %s, %s %d", str, str, str, length);
	fclose(out);

	return 0;
}