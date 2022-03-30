#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	printf("server - listening\n");
	
	//create fifo
	int code = mkfifo("cli_ser_fifo", 0666);	// 0764);
	
	if(code == -1)
		perror("mkfifo returned an error - file may already exist\n");
	
	//open read end	
	int fd = open("cli_ser_fifo", O_RDONLY);
	/*
	if(fd == -1)
	{
		perror("cannot open fifo for read\n");
		return 0;
	}
	*/
	printf("FIFO OPEN\n");
	
	//read string upto 100 chars
	char serverrcv[100];
	memset(serverrcv, 0, 100);			//set server buffer with zeros
	
	int res;
	char len;
	
	read(fd, serverrcv, 100);
	printf("server received : %s\n", serverrcv);
	
	printf("EOF reached\n");
	
	close(fd);
	printf("FIFO Closed\n");
	
	
	return 0;
}
