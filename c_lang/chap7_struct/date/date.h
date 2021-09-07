#ifndef DATE_H
#define DATE_H

typedef struct 
{
	int year;
	int month;
	int day;
} Date;

//void printDate(Date d);
void printDate(const Date *pd);

#endif
