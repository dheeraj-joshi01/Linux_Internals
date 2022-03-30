//using gdb to debug malloc code

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	char *src;
	src = malloc(50);
	fgets(src, 500, stdin);
		
	printf("%s\n", src);
	
	return 1;
	
}
