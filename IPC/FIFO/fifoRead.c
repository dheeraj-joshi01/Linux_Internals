#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	char s[20];
	int fd;
	
	//mkfifo("newFifo", 0644);
	
	//perror("error in mkfifo\n");
	
	fd = open("newFifo", O_RDONLY);
	
	printf("After open()...\n");

	printf("Reading data...\n");
	
	read(fd, s, sizeof(s));
	
	printf("Data is...\n%s", s);
	
	return 0;
}
