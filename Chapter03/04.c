#include<stdio.h>
//different notation of a floating-point number
int main()
{
	double num;
	printf("Enter a floating-point value: ");
	scanf("%lf",&num);
	printf("fixed-point notation: %f",num);
	printf("\nexponent notation: %e",num);
	printf("\np notation: %a",num);
	
	return 0;
 }

