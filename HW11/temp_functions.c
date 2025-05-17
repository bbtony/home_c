#include <stdint.h>
#include <stdbool.h>
#include "temp_functions.h"

bool validate(const dateTimeTemperature *dateTime)
{
	if (dateTime->year < 1000 && dateTime->year > 9999)
		return false;

	if (dateTime->month < 1 && dateTime->month > 12)
		return false;

	if (dateTime->day < 1 && dateTime->day > 31)
		return false;

	if (dateTime->hour < 0 && dateTime->hour > 23)
		return false;

	if (dateTime->minute < 0 && dateTime->hour > 59)
		return false;

	if (dateTime->temperature < -99 && dateTime->temperature > 99)
		return false;

	return true;
}