#include<stdio.h>
#include<stdlib.h>

void buggy()
{
	int *ptr;
	
	ptr = (int *)malloc(sizeof(int));
	
	*ptr = 100;
	
	printf("value of ptr = %d\n", *ptr);
	
	free(ptr);
	
	*ptr = 99;		//error	-->> dereferencing freed ptr		-->>> elec fence and valgrind will detect error
}


int main()
{
	buggy();
	
	return 0;
}
