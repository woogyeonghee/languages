#include <stdio.h>
#include "date.h"

//void printDate(Date d)
void printDate(const Date *pd)
{
	//printf("(%d/%d/%d)\n",d.year,d.month,d.day);
	printf("(%d/%d/%d)\n",pd->year,(*pd).month,pd->day);
}

