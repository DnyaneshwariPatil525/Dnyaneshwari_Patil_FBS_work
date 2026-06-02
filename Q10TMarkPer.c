#include<stdio.h>

void main()
{
	int m1=80 , m2=78 , m3=85 , m4=70 , m5=92;
	int total;
	float per;
	
	total= m1+m2+m3+m4+m5;
	per = total / 5.0;
	
	printf("Total Marks = %d\n",total);
	printf("percentage = %.2f%",per);
}