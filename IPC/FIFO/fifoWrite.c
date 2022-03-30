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
	
	mkfifo("newFifo", 0644);
	
	perror("error in mkfifo\n");
	
	fd = open("newFifo", O_WRONLY);
	
	printf("After open()...\n");

	printf("Enter data...\n");
	
	scanf("%s", s);
	
	write(fd, s, strlen(s)+1);
	
	return 0;
}
