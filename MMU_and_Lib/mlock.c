//using mlock() to lock a process from swapping by OS

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	size_t i;
	const int alloc_size = 32 * 1024 * 1024;
	
	char * memory = malloc(alloc_size);
	mlock(memory, alloc_size);			//lock the 'memory'
	
	for(i=0;i<alloc_size;i++)
	{
		memory[i] = '#';
		printf("allocated init with = %s\n", memory);

		munlock(memory, alloc_size);			//unlock the 'memory'
	}
	
	return 0;
	
}
