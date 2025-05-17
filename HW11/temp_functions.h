#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

#include <stdint.h>

typedef struct
{
	uint16_t year;			// dddd - год, 4 цифры
	uint8_t month;			// mm - месяц, 2 цифры
	uint8_t day;				// dd - день, 2 цифры
	uint8_t hour;				// hh - часы, 2 цифры
	uint8_t minute;			// mm - минуты, 2 цифры
	int8_t temperature; // температура, -99 до 99
} dateTimeTemperature;

#endif