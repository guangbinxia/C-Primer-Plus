#include<stdio.h>
//cups to pints,ounces,tablespoons,teaspoons
int main()
{
	double cups,pints,ounces,tablespoons,teaspoons;
	
	printf("Enter a volume in cups: ");
	scanf("%lf",&cups);
	
	pints = cups/2;
	ounces = cups*8;
	tablespoons = ounces*2;
	teaspoons = tablespoons*3;
	
	printf("pints: %f\n",pints);
	printf("ounces: %f\n",ounces);
	printf("tablespoons: %f\n",tablespoons);
	printf("teaspoons: %f\n",teaspoons);
	
	return 0;
 }

