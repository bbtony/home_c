#include <stdio.h>
#include <string.h>

void modify_str(char str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		switch (str[i])
		{
		case 'a':
			str[i] = 'b';
			break;
		case 'A':
			str[i] = 'B';
			break;
		case 'b':
			str[i] = 'a';
			break;
		case 'B':
			str[i] = 'A';
			break;
		default:
			break;
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

	char str[1001];

	fgets(str, 1001, in);
	fclose(in);

	str[strcspn(str, "\n")] = 0;
	int length = strlen(str);

	modify_str(str, length);

	fprintf(out, "%s", str);
	fclose(out);

	return 0;
}