#include<stdio.h>
//inches to centimeters
int main()
{
	int inches;
	printf("Enter your height in inches: ");
	scanf("%d",&inches);
	double cm;
	cm = 2.54*inches;
	printf("your height in centimeters: %.2f",cm);
	return 0;
 }

