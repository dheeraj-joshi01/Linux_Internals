#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	printf("client process writing\n");
	
	char clintMsg[] = "linux system kernel programming";
	
	//open fifo for write
	int fd = open("cli_ser_fifo", O_WRONLY);
	if(fd == -1)
	{
		perror("cannot open fifo");
		return EXIT_FAILURE;
	}
	
	
	write(fd, clintMsg, strlen(clintMsg));
	
	close(fd);
	
	return 0;
}
