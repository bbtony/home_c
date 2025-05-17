#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "temp_functions.h"

typedef struct
{
	uint8_t Month;					 // номер месяца, от 1 до 12
	uint8_t CountOfDays;		 // количество дней в месяце
	uint8_t ErrValue;				 // количество значений с ошибкой в данных, >0
	int8_t sumOfTemperature; // сумма всех измерений температуры
	int8_t AvgTemperature;	 // средняя температура за месяц, -99 до 99
	int8_t MaxTemperature;	 // максимальная температура за месяц, -99 до 99
	int8_t MinTemperature;	 // минимальная температура за месяц, -99 до 99
} MonthResult;

void print_help()
{
	printf("Описание:\n");
	printf("-h справка \n");
	printf("-f <file.csv> входной файл csv для обработки\n");
	printf("-m <номер месяца> если задан данный ключ, то выводится только статистика за указанный месяц\n");
}

int prepare_flags(int argc, char *argv[], char **filename, int *month, bool *help);

int main(int argc, char *argv[])
{
	bool help = false;
	int month = -1;
	char *filename = NULL;
	int preparingFlags = 0;

	preparingFlags = prepare_flags(argc, argv, &filename, &month, &help);
	if (preparingFlags == 1)
	{
		printf("Error: flags error\n");
		return 1;
	}

	// read file
	FILE *f = fopen(filename, "r");
	if (f == NULL)
	{
		printf("Error: incorrect file");
		return 1;
	}

	char oneLine[100];
	char result[100];
	int count = 0;
	while (fgets(oneLine, 100, f))
	{
		count++;
	}

	// move point of file from the end to the start
	rewind(f);

	// declare array size by count of line
	dateTimeTemperature dataSet[count];

	for (int i; i < count; i++)
	{
		if (!fgets(oneLine, 100, f))
		{
			break;
		}
		// map line to struct and validate
		if (sscanf(oneLine,
							 "%hu;%hhu;%hhu;%hhu;%hhu;%hhd",
							 &dataSet[i].year,
							 &dataSet[i].month,
							 &dataSet[i].day,
							 &dataSet[i].hour,
							 &dataSet[i].minute,
							 &dataSet[i].temperature) != 6)
		{
			fprintf(stderr, "Error: Failed to parse line: %s", oneLine);
			// Обработайте ошибку разбора строки, например, выйдите из цикла или предпримите другие действия
			break;
		}
	}

	// prepare report
	uint8_t length = sizeof(dataSet) / sizeof(dataSet[0]);
	MonthResult res[12];

	if (month != -1)
	{
		for (size_t i = 0; i < length; i++)
		{
			res[dataSet[i].month].Month = dataSet[i].month;
			res[dataSet[i].month].CountOfDays + 1;
		}
	}
	else
	{
		// for (size_t i = 1; i <= 12; i++)
		// {
		// 	res[i].CountOfDays = 0;
		// }
		for (size_t i = 0; i < length; i++)
		{
			int idx = dataSet[i].month - 1;
			res[idx].Month = dataSet[i].month;
			res[idx].CountOfDays = res[idx].CountOfDays + 1;
			if (dataSet[i].temperature < res[idx].MinTemperature)
			{
				res[idx].MinTemperature = dataSet[i].temperature;
			}
			if (dataSet[i].temperature > res[idx].MaxTemperature)
			{
				res[dataSet[i].month].MaxTemperature = dataSet[i].temperature;
			}
		}
	}

	printf("This is work\n");
	return 0;
}

int prepare_flags(int argc, char *argv[], char **filename, int *month, bool *help)
{
	*help = false; // Изначально предполагаем, что справка не нужна

	if (argc == 1)
	{
		*help = true;
		return 0; // Нет ошибок, просто выводим справку
	}

	for (int i = 1; i < argc; i++) // Начинаем с 1, чтобы пропустить имя программы
	{
		if (strcmp(argv[i], "-h") == 0)
		{
			*help = true;
			return 0; // Нашли -h, выводим справку и завершаем
		}

		if (strcmp(argv[i], "-f") == 0)
		{
			if (argc > (i + 1))
			{
				*filename = argv[i + 1]; // Исправлено: присваиваем значение по указателю
				i++;										 // Пропускаем следующий аргумент (значение файла)
				continue;
			}
			else
			{
				printf("Error: filename value not found after -f\n");
				return 1;
			}
		}

		if (strcmp(argv[i], "-m") == 0)
		{
			if (argc > (i + 1))
			{
				int parsed_month = atoi(argv[i + 1]);
				if (parsed_month >= 1 && parsed_month <= 12)
				{
					*month = parsed_month; // Присваиваем значение по указателю
					i++;									 // Пропускаем следующий аргумент (значение месяца)
					continue;
				}
				else
				{
					printf("Error: invalid month value '%s'. Month must be between 1 and 12.\n", argv[i + 1]);
					return 1;
				}
			}
			else
			{
				printf("Error: month value not found after -m\n");
				return 1;
			}
		}
	}

	return 0; // Успешная обработка флагов
}
