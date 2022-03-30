//program to map memory in usr memory

#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/mman.h>


int main()
{
	char *c;
	
	c = mmap(0,50,PROT_READ|PROT_WRITE, MAP_ANONYMOUS|MAP_PRIVATE, -1,0);		//allocate free space in usr memory
	perror("mmap");
	
	strcpy(c, "linuxkernel");		//write to mapped memory
	printf("%s\n", c);
	
	munmap(c,50);		//free the allocated resources
		
	return 0;
	
}
