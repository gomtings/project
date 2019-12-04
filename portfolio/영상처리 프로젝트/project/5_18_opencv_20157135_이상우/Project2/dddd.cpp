#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <ctime>
/*
void main() {
	char times[100];
	time_t tt;        time(&tt);

	tm  local = *(localtime(&tt));

	int year, month, day;
	year = 1900 + local.tm_year;
	month = 1 + local.tm_mon;
	day = local.tm_mday;
	itoa(year , times, 10);
	itoa(month, times, 10);
	itoa(day, times, 10);
	unsigned int hour, minute, second, fs;
	hour = local.tm_hour;
	minute = local.tm_min;
	second = local.tm_sec;
	itoa(hour, times, 10);
	itoa(minute, times, 10);
	itoa(second, times, 10);
}*/