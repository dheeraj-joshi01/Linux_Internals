#include<stdio.h>

int main()
{
	int *i;
	float *f;
	char *c;
	
	//pointing nowhere
	i = NULL;
	f = NULL;
	c = NULL;
	
	printf("value at i: %d\n", *i);
	
	return 0;
}
