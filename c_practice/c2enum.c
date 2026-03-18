#include <stdio.h>


void main()
{
	typedef enum
	{
		day1 =1,
		day2,
		day3,
		day4,
		day5,
		day6,
		day7
	}days;
	int day =1;
	if(day == day1)
	printf("day 1 in enum >> %d \n",day1);

}
