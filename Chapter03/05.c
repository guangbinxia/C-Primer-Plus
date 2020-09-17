#include<stdio.h>
//change years to seconds(3.156E7 seconds in a year)
int main()
{
	int years;
	double seconds;
	printf("Enter your age in years: ");
	scanf("%d",&years);
	seconds = 3.156e7*years;
	printf("the equivalent number of seconds: %e",seconds);
	return 0;
 }

