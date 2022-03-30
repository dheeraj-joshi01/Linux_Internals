#include<stdio.h>
#include<unistd.h>

int main()
{
	int fd[2];
	int res, i;
	char *wbuf1 = "this is write buffer 1...";
	char *wbuf2 = "this is write buffer 2...";
	
	char rbuf[60];
	
	res = pipe(fd);
	
	if(res == -1)
	{
		perror("pipe");
		exit(1);
	}
	
	write(fd[1], wbuf1, 25);
	write(fd[1], wbuf2, 25);
	read(fd[0], rbuf, 50);

	for(i = 0;i<50;i++)
	{
		printf("%c", rbuf[i]);
	}
	
	printf("\n");


	return 0;
}


