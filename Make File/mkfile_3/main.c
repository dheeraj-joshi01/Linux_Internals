#include<stdio.h>

#include "calculate.h"


int main(int argc, char *argv[])
{
	double v1, v2, m1, m2, m3, m4;
	
	v1 = 5.2;
	v2 = 7.9;
	
	m1=mean(v1,v2);
	m2 = sub(v1,v2);
	//m3 = add(v1,v2);
	//m4 = multiply(v1,v2);
		
	printf("The mean of %3.3f and %3.2f is %3.2f\n", v1, v2, m1);
	printf("The difference of %3.3f and %3.2f is %3.2f\n", v1, v2, m2);
	//printf("The addn of %3.3f and %3.2f is %3.2f\n", v1, v2, m3);
	//printf("The multiplication of %3.3f and %3.2f is %3.2f\n", v1, v2, m4);
	
	printf("learning makefile to ei\n");
			
	return 0;
	
}
