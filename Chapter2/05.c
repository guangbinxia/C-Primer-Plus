#include<stdio.h>

void br(void);
void ic(void);

int main()
{
	br();
	printf(", ");
	ic();//first line
	
	printf("\n");
	ic();//second line 
	
	printf(",\n");
	br();//third line
	return 0;
}

void br(void)
{
	printf("Brazil, Russia");
}

void ic(void)
{
	printf("India, China");
}
