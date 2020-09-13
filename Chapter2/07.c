#include<stdio.h>

void smile(void)
{
	printf("Smile!");
}

int main()
{
	smile();smile();smile();//first line 
	
	printf("\n");
	smile();smile();//second line
	
	printf("\n");
	smile();//third line
	
	return 0;
}
