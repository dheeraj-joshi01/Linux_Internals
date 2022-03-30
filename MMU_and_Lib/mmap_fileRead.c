//program to read a file by mapping a memory in usr-mem

#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/mman.h>


int main()
{
	int fd;
	char *c;
	struct stat file_info;
	
	fd = open("mapFile.txt", O_CREAT|O_RDWR, 0777);
	
	write(fd, "linux kernel technology", 25);
	
	fstat(fd, &file_info);
	printf("file size is %d\n", file_info.st_size);
	
	c = mmap(0, file_info.st_size, PROT_READ|PROT_WRITE, MAP_PRIVATE, fd,0);		//allocate space = file size in usr memory
	perror("mmap");
	
	printf("%s\n", c);		//read from memory
	
	munmap(c,file_info.st_size);		//free the allocated all resources
		
	return 0;
	
}
