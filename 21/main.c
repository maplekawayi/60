#include<stdio.h>
#include<assert.h>

typedef unsigned int uint;
#define FALSE 0
#define TRUE 1
void setTime(uint *year, uint *month, uint *day, uint *hour, uint *minute, uint *second);

typedef struct date {
	uint year;
	uint month;
	uint day;
	uint hour;
	uint minute;
	uint second;
}DATE;
void setTime(uint *year, uint *month, uint *day, uint *hour, uint *minute, uint *second)
{
	uint dayofMonth[12] = { 31,28,30,31,30,31,30,31,30,31,30,31 };
	assert(*year > 0 && *month >= 1 && *day >= 1 && *hour >= 0 && *minute >= 0 && *second >= 0 == TRUE);
	assert(*month <= 12 && *day <= dayofMonth[*month - 1] && *hour <= 23 && *minute <= 59 && *second <= 59 == TRUE);
	if (*year % 400 == 0 || (*year % 4 == 0 && *year % 100 != 0))
		dayofMonth[1] = 29;

	switch (*second == 59)
	{
	case TRUE:
		*second = 0;
		*minute += 1;
		break;
	default:
		*second += 1;
		break;
	}
	switch (*minute > 59)
	{
	case TRUE:
		*minute = 0;
		*hour += 1;
		break;
	default:
		break;
	}
	switch (*hour > 23)
	{
	case TRUE:
		*hour = 0;
		*day += 1;
		break;
	default:
		break;
	}
	switch (*day > dayofMonth[*month - 1])
	{
	case TRUE:
		*day = 1;
		*month += 1;
		break;
	default:
		break;
	}
	switch (*month > 12)
	{
	case TRUE:
		*month = 1;
		*year += 1;
		break;
	default:
		break;
	}
}

int main()
{
	DATE date = {0};
	scanf_s("%d %d %d %d %d %d",&date.year, &date.month, &date.day, &date.hour, &date.minute, &date.second);
	setTime(&date.year, &date.month, &date.day, &date.hour, &date.minute, &date.second);
	printf("%d年%d月%d日%d时%d分%d秒\n", date.year, date.month, date.day, date.hour, date.minute, date.second);
	system("pause");
}

