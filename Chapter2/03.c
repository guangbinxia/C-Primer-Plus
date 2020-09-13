#include<stdio.h>

int main()
{
	int age_years,age_days;
	age_years = 19;
	age_days = 365*age_years;//Regardless of leap years, there are 365 days in a year
	printf("age in years is %d,age in days is %d",age_years,age_days);
	return 0;
 } 
