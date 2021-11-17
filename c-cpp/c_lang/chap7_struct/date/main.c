#include <stdio.h>
#include "date.h"

int main(void)
{
	Date today ={ 2021,9,6};

	Date birthday;
	birthday.year=2005;
	birthday.month=8;
	birthday.day=2;

	//printDate(today);
	//printDate(birthday);
	printDate(&today);
	printDate(&birthday);

	return 0;
}
	
