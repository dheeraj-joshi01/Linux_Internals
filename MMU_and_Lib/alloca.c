//using alloca() to allocate memry from stack in case heap is full

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char *name = (char *) alloca(10);
		
	strcpy(name, "linux");
	
	printf("copied str is -> %s\n", name);
	
	return 0;
	
}
