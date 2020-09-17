#include<stdio.h>
//calculate water molecule
int main()
{
	int quarts;
	int grams;
	double mole;
	printf("Enter an amount of water,in quarts: ");
	scanf("%d",&quarts);
	grams = 950*quarts;
	mole = grams/(3.0e-23);
	printf("the number of water molecules: %e",mole);
	return 0;
 }

