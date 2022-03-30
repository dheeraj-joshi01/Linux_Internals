//using brk(), sbrk() to manage prog break point(s)

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
	long int page_size = sysconf(_SC_PAGESIZE);
	printf("my page size = %ld\n", page_size);
	
	void* c1 = sbrk(0);
	printf("prog break addrss =  %p\n", c1);
	printf("sizeof char = %lu\n", sizeof(char));
	
	c1 = (void *) ((char*) c1+9);
	printf("c1 :  %p\n", c1);
	
	brk(c1);
	
	void* c2 = sbrk(0);
	printf("prog break addr : %p\n", c2);
	
	return 0;
	
}
